phy=int(input("Enter the marks of phy:"))
math=int(input("Enter the marks of math:"))
chem=int(input("Enter the marks of chem:"))

total=phy+math+chem
print("total marks:",total)

avg=total/3
print("average marks:",avg)

if(avg>=40):
    if(avg>=60):
        if(avg>=80):
            print("grade A")
        else:
            print("grade B")    
    else:
        print("grade C")       
else:
    print("fail")                    