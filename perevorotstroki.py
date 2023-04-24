text = input("string: ")
max_stars = 0
b = 0
print(len(text))
for i in range(len(text)):
    if text[i] == "*":
        b = i + 1
        count = 0
        r = ""
        while b+1 < len(text) and text[b] != "*":
            count += 1
            b += 1
            r = text[b]
        if count > max_stars and r == "*":
            max_stars = count
print(max_stars)