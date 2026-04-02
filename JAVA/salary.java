import java.util.Scanner;

class Employee
{
	String Emp_name, Emp_id, Address, Mail_id;
	int Mobile_no, BP;
	double DA, HRA, PF, staff_fund, GS, net_sal;
	
	Scanner sc = new Scanner(System.in);
	
	void input()
	{
		 System.out.println("Enter the Name of the Employee:");
		 Emp_name = sc.nextLine();
		 
		 System.out.println("Enter the id of the Employee:");
		 Emp_id = sc.nextLine();
		 
		 System.out.println("Enter the Address of the Employee:");
		 Address = sc.nextLine();
		 
		 System.out.println("Enter the Mail id of the Employee:");
		 Mail_id = sc.nextLine();
		 
		 System.out.println("Enter the Mobile no of the Employee:");
		 Mobile_no = sc.nextInt();
		 
		 System.out.println("Enter the Basic pay of the Employee:");
		 BP = sc.nextInt();
		 
		 System.out.println("\n\n");
	}
	
	void display()
	{
		 System.out.println("\n=================DETAILS OF THE EMPOLYEE=================\n");
		 System.out.println("Name of the Employee     :\t" + Emp_name);
		 System.out.println("ID of the Employee       :\t" + Emp_id);
		 System.out.println("Address of the Employee  :\t" + Address);
		 System.out.println("Mail id of the Employee  :\t" + Mail_id);
		 System.out.println("Mobile no of the Employee:\t" + Mobile_no);
		 System.out.println("\n=========================================================\n");
		 System.out.println("\n");
	}
	
	void cal_salary()
	{
		 DA = 0.97 * BP;
		 HRA = 0.10 * BP;
		 PF = 0.12 * BP;
		 staff_fund = 0.001 * BP;
		 GS = BP + DA + HRA;
		 net_sal = GS - (PF + staff_fund);
	}
	
	void sal_slip()
	{
		 System.out.println("\n=================SALARY SLIP OF THE EMPOLYEE=================\n");
		 System.out.println("Basic pay of the Employee   :\t" + BP);
		 System.out.println("HRA of the Employee         :\t" + HRA);
		 System.out.println("PF of the Employee          :\t" + PF);
		 System.out.println("DA of the Employee          :\t" + DA);
		 System.out.println("Staff fund of the Employee  :\t" + staff_fund);
		 System.out.println("Gross salary of the Employee:\t" + GS);
		 System.out.println("Net salary of the Employee  :\t" + net_sal);
		 System.out.println("\n=============================================================\n");
	}
}

class Programmer extends Employee
{
	void getprogrammer()
	{
		 input();
		 display();
		 cal_salary();
		 sal_slip();
	 
	}
}

class Team_Lead extends Employee
{
	void getteamlead()
	{
		input();
		display();
		cal_salary();
		sal_slip();
	}
}

class Assistant_project_manager extends Employee
{
	void getassistant()
	{
		input();
		display();
		cal_salary();
		sal_slip();
	}
}

class Project_manager extends Employee
{
	void getmanager()
	{
		input();
		display();
		cal_salary();
		sal_slip();
	}
}

public class salary
{
	public static void main(String[] args)
	{
		Programmer p = new Programmer();
		Team_Lead t = new Team_Lead();
		Assistant_project_manager a = new Assistant_project_manager();
		Project_manager m = new Project_manager();
		
		int choice;
		
		do
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("MAIN MENU\n\n");
			System.out.println("1.Programmer");
			System.out.println("2.Team Lead");
			System.out.println("3.Assistant project manager");
			System.out.println("4.Project manager");
			
			System.out.println("\n\nEnter the preferred choice:");
			choice = sc.nextInt();
			 
			switch(choice)
			{
				 case 1:
				 p.getprogrammer();
				 break;
				  
				 case 2:
				 t.getteamlead();
				 break;
				  
				 case 3:
				 a.getassistant();
				 break;
				  
				 case 4:
				 m.getmanager();
				 break;
			}
		}while(choice < 5);
	}
}