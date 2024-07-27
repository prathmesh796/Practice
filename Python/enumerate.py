li = [2, 45, 34, 56, 78, 2, 5, 12, 22, 90]

for index, l in enumerate(li):
    print(index, l)


print("index starting from 1 : ")
for index, l in enumerate(li, start=1):
    print(index, l)