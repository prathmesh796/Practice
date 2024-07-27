print("Select the type of shape you want:")
print("1. 2-dimensional")
print("2. 3-dimensional")
print("\n")

dimension=int(input("Press the no. of the choosen option:"))
print("\n")

if(dimension==1):
    print("Available shapes are as follows:")
    print("1. square ")
    print("2. rectangle ")
    print("3. circle ")
    print("4. ellipse ")
    print("5. triangle ")
    print("6. parallelogram ")
    print("7. trapezium ")
    print("8. kite ")
    print("9. rhombus")
    print("\n")
    
    SD_shape=int(input("Press the no. of the choose shape:"))
    print("\n")
    
    if(SD_shape==1):
        a1=int(input("Enter the side length of   square:"))
        A1=a1*a1
        print("Area of square=", A1)
        
    elif(SD_shape==2):
        a2=int(input("Enter the length of rectangle:"))
        b2=int(input("Enter the breath of rectangle:"))
        A2=a2*b2
        print("Area of rectangle=", A2)
        
    elif(SD_shape==3):
        a3=int(input("Enter the radius of circle:"))
        A3=3.14*a3*a3
        print("Area of circle=", A3)
        
    elif(SD_shape==4):
        a4=int(input("Enter the length of minor axis of ellipse:"))
        b4=int(input("Enter the length of major axis of ellipse:"))
        A4=3.14*a4*b4
        print("Area of ellipse=", A4)
        
    elif(SD_shape==5):
        a5=int(input("Enter the base of triangle:"))
        b5=int(input("Enter the height of triangle:"))
        A5=0.5*a5*b5
        print("Area of triangle=", A5)
        
    elif(SD_shape==6):
        a6=int(input("Enter the base of parallelogram:"))
        b6=int(input("Enter the height of parallelogram:"))
        A6=a6*b6
        print("Area of parallelogram=", A6)
        
    elif(SD_shape==7):
        a7=int(input("Enter the length first parallel side of trapezium:"))
        b7=int(input("Enter the length second parallel side of trapezium:"))
        h7=int(input("Enter the height of trapezium:"))
        A7=0.5*(a7+b7)*h7
        print("Area of trapezium=", A7)
        
    elif(SD_shape==8):
        a8=int(input("Enter the length first diagonal of kite:"))
        b8=int(input("Enter the length second diagonal of kite:"))
        A8=0.5*a8*b8
        print("Area of kite=", A8)
        
    else:
        a9=int(input("Enter the length first diagonal of kite:"))
        b9=int(input("Enter the length second diagonal of kite:"))
        A9=0.5*a9*b9
        print("Area of kite=", A9)

else:
    print("Available shapes are as follows:")
    print("1. cube ")
    print("2. cuboid ")
    print("3. cone ")
    print("4. cylinder ")
    print("5. sphere ")
    print("6. hemisphere")
    print("7. frustum ")
    print("\n")
    
    TD_shape=int(input("Press the no. of the choose shape:"))
    print("\n")
       
    if(TD_shape==1):
        x1=int(input("Enter the side length of cube:"))
        S1=6*x1*x1
        print("Surface area of cube:", S1)
        
    elif(TD_shape==2):
        x2=int(input("Enter the length of cuboid:"))
        y2=int(input("Enter the breadth of cuboid:"))
        z2=int(input("Enter the height of cuboid:"))
        S2=2*((x2*y2)+(y2*z2)+(x2*z2))
        print("Surface area of cuboid:", S2)
        
    elif(TD_shape==3):
        x3=int(input("Enter the radius of cone:"))
        y3=int(input("Enter the slant height of cone:"))
        S3=3.14*x3*(x3+y3)
        print("Surface area of cone:", S3)
        
    elif(TD_shape==4):
        x4=int(input("Enter the radius of cylinder:"))
        y4=int(input("Enter the height of cylinder:"))
        S4=2*3.14*x4*(x4+y4)
        print("Surface area of cylinder:", S4)
        
    elif(TD_shape==5):
        x5=int(input("Enter the radius of sphere:"))
        S5=4*3.14*x5*x5
        print("Surface area of sphere:", S5)
        
    elif(TD_shape==6):
        x6=int(input("Enter the radius of hemisphere:"))
        S6=3*3.14*x6*x6
        print("Surface area of hemisphere:", S6)
        
    else:
        x7=int(input("Enter the radius of smaller circle of frustum:"))
        y7=int(input("Enter the radius of larger circle of frustum:"))
        z7=int(input("Enter the slant height of frustum:"))
        S7=(3.14*z7*(x7+y7))+(3.14*((x7*x7)+(y7*y7)))
        print("Surface area of frustum:", S7)       
          