#include <iostream>
#include <time.h>
using namespace std;
template <typename T>
struct Element
{
    T data;
    Element<T>* next;
};
 
template <typename T>
class MyList
{
private:
    Element<T>* head;
    Element<T>* tail;
    int count;
public:
    MyList()
    {
        head = tail = NULL;
        count = 0;
    }
 
    ~MyList()
    {
        DeleteAll();
    }
    void AddToHead(T value)
    {
        Element<T>* temp = new Element<T>;
        temp->data = value;
        temp->next = NULL;
 
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        count++;
    }
    void DeleteFromTail()
    {
        if (head == nullptr)
        {
            return;
        }
        else {
            Element<T>* temp = head->next;
            delete head;
            head = temp;
            count--;
        }
    }
 
    void DeleteAll()
    {
        while (head != NULL)
        {
            DeleteFromTail();
        }
    }
 
    void Print()
    {
        Element<T>* temp = head;
 
        while (temp != NULL)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }
        cout << endl;
    }
 
    int GetCount()
    {
        return count;
    }
};
int main()
{
    srand(time(NULL));
    MyList<int> List1;
    int count = 5;
 
    for (int i = 0; i < count; i++)
    {
        List1.AddToHead(i);
    }
 
    cout << "count = " << List1.GetCount() << endl;
 
    List1.Print();
}