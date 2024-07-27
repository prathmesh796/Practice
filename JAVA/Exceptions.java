import java.util.Scanner;


class exception
{
	void checkArithmeticException()
	{
		int num1, num2;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the first number: ");
		num1 = sc.nextInt();
		
		System.out.print("Enter the second number: ");
		num2 = sc.nextInt();
		
		System.out.print("\n");

		if(num2 == 0)
		{
			throw new ArithmeticException("num2 cannot divide num1");
			
		}
		
		else
		{
			System.out.println("num2 can divide num1");
			System.out.println("Division of these two numbers is: "+ (num1/num2));
		}
	}
	
	void checkOutOfBoundException()
	{
		int n;
		int a[] = {1, 2, 3, 4, 5};
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the index of the element that you want to access: ");
		n = sc.nextInt();
		
		if(n > 4)
		{
			throw new ArrayIndexOutOfBoundsException("invalid index number entered");
		}
		
		else
		{
			System.out.println("Element at index " + n + " is: " + a[n]);
		}
	}
	
	void checkNumberFormatException()
	{
		String num1, num2;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the first number:");
		num1 = sc.nextLine();
		
		System.out.print("Enter the second number:");
		num2 = sc.nextLine();
		
		System.out.print("\n");
		
		try
		{
			Integer.parseInt(num1);
			System.out.println(num1 + " is a valid integer");
		}
		
		catch(NumberFormatException e)
		{
			System.out.println(num1 + " is a invalid integer");
			throw new NumberFormatException(num1 + " is a invalid integer");
		}
		
		try
		{
			Integer.parseInt(num2);
			System.out.println(num2 + " is a valid integer");
		}
		
		catch(NumberFormatException e)
		{
			System.out.println(num2 + " is a invalid integer");
			throw new NumberFormatException(num2 + " is a invalid integer");
		}
	}
}

public class Exceptions
{
	public static void main(String [] args)
	{
		
		exception x = new exception();
		
		int ch1;
		
		Scanner sc = new Scanner(System.in);
		
		do
		{
			System.out.println("\nChoose the preferred option:");
			System.out.println("1. Check Arithmetic Exception");
			System.out.println("2. Check Array Out Of Bound Exception");
			System.out.println("3. Check Number Format Exception");
			System.out.println("4. Exit");
			
			ch1 = sc.nextInt();
			
			switch(ch1)
			{
				case 1:
					try
					{
						x.checkArithmeticException();
					}
					
					catch(ArithmeticException q)
					{
						System.out.println("num2 cannot divide num1");
					}
					break;
					
				case 2:
					try
					{
						x.checkOutOfBoundException();
					}
					
					catch(ArrayIndexOutOfBoundsException r)
					{
						System.out.println("The number which you want to acces is not present int the array");
					}
					break;
					
				case 3:
					try
					{
						x.checkNumberFormatException();
					}
					
					catch(NumberFormatException p)
					{
						System.out.println("The string that you entered is not an integer");
					}
					break;
			}
		}while(ch1 < 4);
	}
}
