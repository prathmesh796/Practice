n=int(input("enter the number:"))
f_list=[1, 1]
a=1
f=1
for i in range(0, n-2):
    c=a
    a=f
    f+=c
    f_list.append(f)
print(f_list)