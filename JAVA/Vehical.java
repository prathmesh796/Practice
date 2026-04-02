import java.util.Scanner;

interface vehical
{
	void changeGear(int a);
	void speedUp();
	void applyBreaks();	
}

class Bicycle implements vehical{
	int gear, speed;
	
	Bicycle(){
		System.out.println("\tBicycle started successfully\n");
		gear = 1;
		speed = 2;
	}
	
	public void changeGear(int newGear)
	{
		if(newGear <= 4 && newGear >= 1)
		{
			gear = newGear;
			System.out.println("Gear changed successfully.");
			System.out.println("Current Gear:" + gear);
		}
		
		else
		{
			System.out.println("Gear is out of range!");
		}
	}
	
	public void speedUp()
	{
		if(gear == 1 && (speed+2) < 10)
		{
			speed+=2;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 2 && (speed+2) < 20)
		{
			speed+=2;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 3 && (speed+2) < 30)
		{
			speed+=2;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 4 && (speed+2) < 40)
		{
			speed+=2;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if (speed == 40)
		{
			System.out.println("Maximum speed limit reached.");
		}
		
		else
		{
			System.out.println("Change the gear to change the speed.");
		}
	}
	
	public void applyBreaks()
	{
		int x;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Choose the following:");
		System.out.println("1. Decrease speed");
		System.out.println("2. Stop");
		
		x = sc.nextInt();
		
		if(x == 1)
		{
			if((speed-5) > 0)
			{
				speed-=5;
				System.out.println("Breaks applied successfully.");
				System.out.println("Current Speed:" + speed);
			}
			
			else
			{
				speed = 0;
				gear = 0;
				System.out.println("Bicycle stopped successfully");
			}
		}
		
		else if(x == 2)
		{
			speed = 0;
			gear = 0;
			System.out.println("Bicycle stopped successfully");
		}
	}
}

class Bike implements vehical
{
	int gear, speed;
	
	Bike()
	{
		System.out.println("\tBike started successfully\n");
		gear = 1;
		speed = 5;
	}
	
	public void changeGear(int newGear)
	{
		if(newGear <= 4 && newGear >= 1)
		{
			gear = newGear;
			System.out.println("Gear changed successfully.");
			System.out.println("Current Gear:" + gear);
		}
		
		else
		{
			System.out.println("Gear is out of range!");
		}
	}
	
	public void speedUp()
	{
		if(gear == 1 && (speed+5) < 20)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 2 && (speed+5) < 40)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 3 && (speed+5) < 60)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 4 && (speed+5) < 80)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if (speed == 80)
		{
			System.out.println("Maximum speed limit reached.");
		}
		
		else
		{
			System.out.println("Change the gear to change the speed.");
		}
	}
	
	public void applyBreaks()
	{
		int x;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Choose the following:");
		System.out.println("1. Decrease speed");
		System.out.println("2. Stop");
		
		x = sc.nextInt();
		
		if(x == 1)
		{
			if((speed-5) > 0)
			{
				speed-=5;
				System.out.println("Breaks applied successfully.");
				System.out.println("Current Speed:" + speed);
			}
			
			else
			{
				speed = 0;
				gear = 0;
				System.out.println("Bike stopped successfully");
			}
		}
		
		else if(x == 2)
		{
			speed = 0;
			gear = 0;
			System.out.println("Bike stopped successfully");
		}
	}
}

class Car implements vehical
{
	int gear, speed;
	
	Car()
	{
		System.out.println("\tCar started successfully\n");
		gear = 1;
		speed = 10;
	}
	
	public void changeGear(int newGear)
	{
		if(newGear <= 6 && newGear >= 1)
		{
			gear = newGear;
			System.out.println("Gear changed successfully.");
			System.out.println("Current Gear:" + gear);
		}
		
		else
		{
			System.out.println("Gear is out of range!");
		}
	}
	
	public void speedUp()
	{
		if(gear == 1 && (speed+5) < 30)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 2 && (speed+5) < 50)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 3 && (speed+5) < 70)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if(gear == 4 && (speed+5) < 90)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}

		else if(gear == 5 && (speed+5) < 110)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}

		else if(gear == 6 && (speed+5) < 130)
		{
			speed+=5;
			System.out.println("Speed increased successfully.");
			System.out.println("Current Speed:" + speed);
		}
		
		else if (speed == 130)
		{
			System.out.println("Maximum speed limit reached.");
		}
		
		else
		{
			System.out.println("Change the gear to change the speed.");
		}
	}
	
	public void applyBreaks()
	{
		int x;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Choose the following:");
		System.out.println("1. Decrease speed");
		System.out.println("2. Stop");
		
		x = sc.nextInt();
		
		if(x == 1)
		{
			if((speed-5) > 0)
			{
				speed-=5;
				System.out.println("Breaks applied successfully.");
				System.out.println("Current Speed:" + speed);
			}
			
			else
			{
				speed = 0;
				gear = 0;
				System.out.println("Car stopped successfully");
			}
		}
		
		else if(x == 2)
		{
			speed = 0;
			gear = 0;
			System.out.println("Car stopped successfully");
		}
	}
}

public class Vehical
{
	public static void main(String[] args)
	{
		vehical v = null;
		
		
		Scanner sc = new Scanner(System.in);
		
		int newGear;
		int choice1, choice2;
		
		do
		{
			System.out.println("Select the preferred vehical:");
			System.out.println("\t1. Bicycle");
			System.out.println("\t2. Bike");
			System.out.println("\t3. Car");
			System.out.println("\t4. Exit");
			
			choice1 = sc.nextInt();
			
			
			switch(choice1)
			{
				case 1:
				v = new Bicycle();
				do
				{		
					System.out.println("Select the preferred vehical:");
					System.out.println("\t1. Change gear");
					System.out.println("\t2. Accelerate");
					System.out.println("\t3. Apply Breaks");
					System.out.println("\t4. Exit");
					
					choice2 = sc.nextInt();
					
					switch(choice2)
					{
						case 1:
						System.out.println("Enter the gear to which you have to change:");
						newGear = sc.nextInt();
						v.changeGear(newGear);
						break;
						
						case 2:
						v.speedUp();
						break;
						
						case 3:
						v.applyBreaks();
						break;
					}
				}while(choice2 < 4);
				break;	
				
				case 2:
				v = new Bike();
				do
				{		
					System.out.println("Select the preferred vehical:");
					System.out.println("\t1. Change gear");
					System.out.println("\t2. Accelerate");
					System.out.println("\t3. Apply Breaks");
					System.out.println("\t4. Exit");
					
					choice2 = sc.nextInt();
					
					switch(choice2)
					{
						case 1:
						System.out.println("Enter the gear to which you have to change:");
						newGear = sc.nextInt();
						v.changeGear(newGear);
						break;
						
						case 2:
						v.speedUp();
						break;
						
						case 3:
						v.applyBreaks();
						break;
					}
				}while(choice2 < 4);
				break;

				case 3:
				v = new Car();
				do
				{		
					System.out.println("Select the preferred vehical:");
					System.out.println("\t1. Change gear");
					System.out.println("\t2. Accelerate");
					System.out.println("\t3. Apply Breaks");
					System.out.println("\t4. Exit");
					
					choice2 = sc.nextInt();
					
					switch(choice2)
					{
						case 1:
						System.out.println("Enter the gear to which you have to change:");
						newGear = sc.nextInt();
						v.changeGear(newGear);
						break;
						
						case 2:
						v.speedUp();
						break;
						
						case 3:
						v.applyBreaks();
						break;
					}
				}while(choice2 < 4);
				break;
			}			
		}while(choice1 < 4);		
	}
}