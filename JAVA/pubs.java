import java.util.Scanner;

//publication sector
class Publication
{
	 String Title;
	 int Price, Copies, number;
	 
	 Scanner sc = new Scanner(System.in);
	 
	 void getData()
	 {
		  System.out.println("Enter the title:");
		  Title = sc.nextLine();
		  
		  System.out.println("Enter the price:");
		  Price = sc.nextInt();
		  
		  System.out.println("Enter no. of copies available:");
		  Copies = sc.nextInt();
	 }
	 
	 void displayData()
	 {
		  System.out.println("Title                  :\t" + Title);
		  System.out.println("Price                  :\t" + Price);
		  System.out.println("No. of copies available:\t" + Copies);
	 }
	 
	 void saleCopy(int number)
	 {
	 	if(number <= Copies)
	 	{
	 		System.out.println("No. of copies you purchased:\t" + number);
	 		System.out.println("Total amount to be paid    :\t" + number * Price); 
	 		System.out.println("\n"); 
	 	}
	 	
	 	else
	 	{
	 		System.out.println("INSUFFICANT STOCK....!!!");
	 	}
	 }
	 
	 void payment()
	 {
		String ch = "n";
		
		while(ch == "n")
		{
			System.out.println("Have you done the payment?");
			ch = sc.nextLine();

			if(ch == "y")
			{
				System.out.println("OREDER SUCCESSFUL...!!!");
			}

			else
			{
				System.out.println("Please process your payment");
			}
		}
	 }
}

//books sector
class Book extends Publication
{	 
	 String Author;
	 
	 Scanner sc = new Scanner(System.in);
	 
	 void read_book()
	 {
	 	getData();
	 	System.out.println("Enter the author:");
		Author = sc.nextLine();
	 }
	 
	 void display_book()
	 {
	 	displayData();
	 	System.out.println("Author                 :\t" + Author);
	 }
	 
	 void orderCopies()
	 {
	  	System.out.println("Enter copies you wnat to oreder:");
	  	number = sc.nextInt();
	  	saleCopy(number);
	  	payment();
	 }	
}

//magazine sector
class Magazine extends Publication
{
	String Company, curr_date, rec_date, ch;
	int choice3;
	
	Scanner sc = new Scanner(System.in);
	
	void new_issue()
	{
		getData();
		
		System.out.println("Enter the company:");
		Company = sc.nextLine();
		
		System.out.println("Enter the date of current issue[DD/MM/YYYY]:");
		curr_date = sc.nextLine();
		
		System.out.println("Enter the date of recieve issue[DD/MM/YYYY]:");
		rec_date = sc.nextLine();
	}
	
	void display_issue()
	{
		displayData();
		System.out.println("Company                :\t" + Company);
		System.out.println("Current issue date     :\t" + curr_date);
		System.out.println("Recevie issue date     :\t" + rec_date);
	}
	
	void orderCopies()
	 {
	  	System.out.println("Enter copies you wnat to oreder:");
	  	number = sc.nextInt();
	  	saleCopy(number);
	  	payment();
	  	/*System.out.println("Have you done the payment:(y/n)");
	  	ch = sc.nextLine();
	  	
	  	if(ch == "y")
	  	{
	  		System.out.println("ORDER SUCCESSFUL...!!!");	
	  	}
	  	
	  	if(ch == "n")
	  	{
	  		System.out.println("Please pay the amount...");
	  	}*/
	  }
	  
	  void currentIssue()
	  {
	  	System.out.println("What would you like to do with your magazine");
	  	System.out.println("1. Return:");
	  	System.out.println("2. Renewal:");
	  	
	  	System.out.println("Select the preferred choice:");
	  	choice3 = sc.nextInt();
	  	
	  	switch(choice3)
	  	{
	  		case 1:
	  		System.out.println("Your refundable amount:" + ((number * Price) / 2));
	  		System.out.println("THANK YOU FOR YOUR PURCHASE...!!!");
	  		
	  		case 2:
	  		System.out.println("");
	  	}
	  	
	  }	
}

public class pubs
{
	 public static void main(String[] args)
	 {
	 	Book b = new Book();
		Magazine m = new Magazine();
	 	
	 	int choice1, choice2, choice4;
	 	
	 	do
	 	{
	 		Scanner sc = new Scanner(System.in);

			System.out.println("\nMAIN MENU\n");
			System.out.println("1. BOOK");
			System.out.println("2. MAGAZINE");
			
			System.out.println("\nEnter the preferred choice:");
			choice1 = sc.nextInt();
			
			switch(choice1)
			{
				case 1:
				do
				{
					System.out.println("\nBOOKS SECTION\n");
					System.out.println("1. Enter the details of book you want");
					System.out.println("2. Show the book you entered");
					System.out.println("3. Place the order of the book");
					System.out.println("4. Previous menu");
					
					System.out.println("\nEnter the preferred choice:");
					choice2 = sc.nextInt();
					
					switch(choice2)
					{
						case 1:
						b.read_book();
						break;
						
						case 2:
						b.display_book();
						break;
						
						case 3:
						b.orderCopies();
						break;
					}
				}while(choice2 < 4);
				break;

				case 2:
				do
				{
					System.out.println("\nMAGAZINE SECTION\n");
					System.out.println("1. Issue a new magazine");
					System.out.println("2. Show the current issue");
					System.out.println("3. Place the order of the magazine");
					System.out.println("4. Actions on current issued magazine");
					System.out.println("5. Previous menu");
					
					System.out.println("\nEnter the preferred choice:");
					choice4 = sc.nextInt();
					
					switch(choice4)
					{
						case 1:
						m.new_issue();
						break;
						
						case 2:
						m.display_issue();
						break;
						
						case 3:
						m.orderCopies();
						break;

						case 4:
						m.currentIssue();
						break;
					}
				}while(choice4 < 5);
				break;
			}
	 	}while(choice1 < 4);
	 }
}