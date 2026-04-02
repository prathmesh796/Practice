import java.util.Scanner;

abstract class shape
{
	double x, y;
	
	Scanner sc = new Scanner(System.in);
	
	void input()
	{
		System.out.println("Enter the value of x:");
		x = sc.nextDouble();
		
		System.out.println("Enter the value of y:");
		y = sc.nextDouble();
	}
	
	abstract void Compute_area();
}

class Triangle extends shape
{
	void Compute_area()
	{
		double area;
		area = 0.5 * x * y;
		System.out.println("Area of triangle:" + area + "\n");
	}
}

class Rectangle extends shape
{
	void Compute_area()
	{
		double area;
		area = x * y;
		System.out.println("Area of rectangle:" + area + "\n");
	}
}

public class shape
{
	public static void main(String[] args)
	{
		shape s1;
		
		int ch;
		
		Scanner sc = new Scanner(System.in);
		
		do
		{
			System.out.println("Available shapes:");
			System.out.println("1. Triangle");
			System.out.println("2. Rectangle");
			
			System.out.println("Select the preferred shape:");
			ch = sc.nextInt();
			
			switch(ch)
			{
				case 1:
				s1 = new Triangle(); 
				s1.input();
				s1.Compute_area();
				break;
				
				case 2:
				s1 = new Rectangle();
				s1.input();
				s1.Compute_area();
				break;
			}
		}while(ch < 3);
	}
}