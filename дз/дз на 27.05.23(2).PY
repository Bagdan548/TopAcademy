words = {}
for i in input().split():
 i = i.strip('.,!?:;-').lower()
 words[i] = words.get(i, 0) + 1 
print(min(words.items(), key=lambda x: (x[1], x[0]))[0])