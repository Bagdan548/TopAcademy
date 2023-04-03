a = 'qwe a qwe. qweqw eweq qq, qqqqwwe. eqqqq'
print(a.capitalize())
 
b = 'qwe123'
print(len([i for i in b if i.isdigit()]))
 
import string
punc = string.punctuation
c = 'qwer, qwer. qwer!'
print(len([j for j in c if j in punc]))
 
d = 'qwer, qwer. qwer!'
print(len([j for j in c if j in "!"]))