num=int(input("Enter the number of rows to be printed:"))

for i in range (1, num+1):
    print()
    for j in range (1, num+2-i ):
        print("*", end=' ' )
        
print("\n")  
    
for i in range (0, num):
    print()
    for j in range (0, i+1):
        print("*", end=" ")