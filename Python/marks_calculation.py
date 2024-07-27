#a program to calculate total, average, percentage, and grade of a students marks in 3 subjects

phy=int(input("Enter the marks of phy:"))
math=int(input("Enter the marks of math:"))
chem=int(input("Enter the marks of chem:"))

total=phy+math+chem
print("Total marks:",total)

avg=total/3
print("Average marks:",avg)

per=(total/300)*100
print("Precentage marks:",per)

if(avg>=80 and math>=90):
    print("Grade A")
elif(avg>=60 and math>=70):
    print("Grade B")     
elif(avg>=40 and math>=50):
    print("Grade C")      
else:
    print("FAIL")     