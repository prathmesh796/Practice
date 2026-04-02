// Provide Class type 
import java.util.*;

enum CarType 
{
	SMALL, SEDAN, LUXURY
}

// Abstract class car. It is parents for all types of class

abstract class Car 
{
	public Car(CarType model) 
	{
		this.model = model;

		arrangeParts();
	}

	private void arrangeParts() 
	{
		// Do one time processing here
	}

	protected abstract void construct();

	private CarType model = null;

	public CarType getModel() 
	{
		return model;
	}

	public void setModel(CarType model) 
	{
		this.model = model;
	}
}

class LuxuryCar extends Car 
{

	String company, car_name;
	double budget;

	LuxuryCar() 
	{
		super(CarType.LUXURY);

		construct();
	}

	protected void construct() 
	{
		Scanner scan = new Scanner(System.in);// creating object of scanner class

		System.out.println("Building luxury car");

		System.out.print("Company- ");
		company = scan.next();// taking input from user

		System.out.print("Car-     ");
		car_name = scan.next();// taking input from user

		System.out.print("Rough Budget(in Lakhs)- ");
		budget = scan.nextDouble();// taking input from user

		System.out.println("luxury car Details");
		System.out.println("Company-               " + company);
		System.out.println("Name of Car-           " + car_name);
		System.out.println("Budget of Car-         " + budget);
		System.out.println("Color-               Black/White/Orange/Red");
		System.out.println("Fuel-                Diesel");
		System.out.println("Gears-               Auto");
		System.out.println("Types of Tyres-      Alloy Wheels");
		System.out.println("Airbags-             YES");
		System.out.println("Back Wiper-          YES");
		System.out.println("Side Mirror-         Two");
		System.out.println("Touch Screen Player- YES");
		System.out.println("Roof Window-         YES");
	}
}

class SmallCar extends Car 
{
	String company, car_name;
	double budget;

	SmallCar() 
	{
		super(CarType.SMALL);

		construct();
	}

	protected void construct() 
	{
		Scanner scan = new Scanner(System.in);// creating object of scanner class

		System.out.println("Building small car");

		System.out.print("Company- ");
		company = scan.next();// taking input from user

		System.out.print("Car-     ");
		car_name = scan.next();// taking input from user

		System.out.print("Rough Budget(in Lakhs)- ");
		budget = scan.nextDouble();// taking input from user

		System.out.println("Small car Details");
		System.out.println("Company-        " + company);
		System.out.println("Name of Car-    " + car_name);
		System.out.println("Budget of Car-  " + budget);
		System.out.println("Color-          Black/White/Orange/Red");
		System.out.println("Fuel-           Petrol");
		System.out.println("Gears-          Manual");
		System.out.println("Types of Tyres- Alloy Wheels");
		System.out.println("Side Mirror-    Two");
	}
}

class SedanCar extends Car 
{
	String company, car_name;
	double budget;

	SedanCar() 
	{
		super(CarType.SEDAN);

		construct();
	}

	protected void construct() 
	{
		Scanner scan = new Scanner(System.in);// creating object of scanner class

		System.out.println("Building sedan car");

		System.out.print("Company- ");
		company = scan.next();// taking input from user

		System.out.print("Car-     ");
		car_name = scan.next();// taking input from user

		System.out.print("Rough Budget(in Lakhs)- ");
		budget = scan.nextDouble();// taking input from user

		System.out.println("Sedan car Details");
		System.out.println("Color-               Black/White/Orange/Red");
		System.out.println("Fuel-                Petrol/Diesel");
		System.out.println("Gears-               Auto/Manual");
		System.out.println("Types of Tyres-      Alloy Wheels");
		System.out.println("Airbags-             YES");
		System.out.println("Back Wiper-          YES");
		System.out.println("Side Mirror-         Two");
		System.out.println("Touch Screen Player- YES");
	}
}

class CarFactory 
{
	public static Car buildCar(CarType model) 
	{
		Car car = null;

		switch (model) 
		{
			case SMALL:
				car = new SmallCar();
				break;

			case SEDAN:
				car = new SedanCar();
				break;

			case LUXURY:
				car = new LuxuryCar();
				break;

			default:
				break;
		}
		return car;
	}
}

public class testFactoryPattern 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in);

		while (true) 
		{
			System.out.println("\nChoose Car Type -");
			System.out.println("1. Small");
			System.out.println("2. Sedan");
			System.out.println("3. Luxury");
			System.out.println("4. Exit");

			int choice = input.nextInt();

			System.out.println("\n");

			switch (choice) 
			{
				case 1:
					System.out.println(CarFactory.buildCar(CarType.SMALL));
					break;

				case 2:
					System.out.println(CarFactory.buildCar(CarType.SEDAN));
					break;

				case 3:
					System.out.println(CarFactory.buildCar(CarType.LUXURY));
					break;

				case 4:
					break;
			}

			if (choice == 4) 
			{
				break;
			}
		}
	}
}