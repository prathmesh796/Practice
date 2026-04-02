import java.util.Scanner;

class Customer {
    private String customerName;
    private int customerAge;

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerAge(int customerAge) {
        this.customerAge = customerAge;
    }

    public int getCustomerAge() {
        return customerAge;
    }
}

abstract class Account {
    protected double balance;
    protected int accountId;
    protected String accountType;
    protected Customer custobj;

    void setBalance(double balance) {
        this.balance = balance;
    }

    double getBalance() {
        return balance;
    }

    void setAccountId(int accountId)

    {
        this.accountId = accountId;
    }

    int getAccountId() {
        return accountId;
    }

    void setAccountType(String accountType) {
        this.accountType = accountType;
    }

    String getAccountType() {
        return accountType;
    }

    void setCustomerObject(Customer custobj) {
        this.custobj = custobj;
    }

    Customer getCustomerObject() {
        return custobj;
    }

    public abstract boolean withdraw(double amount); // abstract method withdraw
}

class SavingsAccount extends Account {
    private double minimumBalance;

    public void setMinimumBalance(double minimumBalance) {
        this.minimumBalance = minimumBalance;
    }

    public double getMinimumBalance() {
        return minimumBalance;
    }

    public boolean withdraw(double amount) {
        // method to return true or false
        if ((balance - amount) > minimumBalance) {
            balance -= amount;

            return true;
        } else {
            return false;
        }
    }
}

class Bank {
    public static Scanner sc = new Scanner(System.in);
    public SavingsAccount a = new SavingsAccount();
    public Customer c = new Customer();

    public SavingsAccount createAccount()
    {
        sc.nextLine();

        System.out.print("Enter your name: ");
        String customername=sc.nextLine();

        c.setCustomerName(customername);
        System.out.print("Enter your age: ");

        int customerage=sc.nextInt();

        if(customerage<18)
        {//check whether the age is less than 18
            do
            {
            System.out.print("Minimum age should be 18 to create an account.\nPlease enter valid age: ");
            customerage=sc.nextInt();
            }while(customerage<18);
        }

        c.setCustomerAge(customerage);
        a.setCustomerObject(c);

        System.out.print("Enter your account Id: ");
        int accountid=sc.nextInt();
        a.setAccountId(accountid);

        System.out.print("Enter your account type: ");
        String accounttype=sc.next();
        a.setAccountType(accounttype);

        System.out.print("Enter balance: ");
        double balance=sc.nextDouble();
        a.setBalance(balance);

        System.out.print("Enter minimum balance: ");
        double minbalance=sc.nextDouble();
        a.setMinimumBalance(minbalance);
        return a;
    }

    void getWithdrawAmount() {
        System.out.print("Enter the amount you want to withdraw: ");
        double amount = sc.nextDouble(); // taking amount as input from user
        if (amount > 20000) { // check whether amount is greater than 20000
            System.out.println("Withdrawal failed. Maximum limit of withdrawal in one transaction is Rs.20000.");
        } else {
            if (a.withdraw(amount) == true) {
                System.out.println("Withdrawal successful. Balance is: " + a.getBalance());
            } else {
                System.out.println("Sorry!!! Not enough balance");
            }
        }
    }

    public void depositAmount(double amount) {
        double bal = a.getBalance() + amount;
        a.setBalance(bal);
        System.out.println("Amount deposited successfully. Balance is: " + a.getBalance());
    }

    public void checkBalance() {
        System.out.println("Balance is: " + a.getBalance());// calling getbalance method
    }

    public void displayAccountInformation() {
        System.out.println("Welcome " + c.getCustomerName() + "! Following are your account details:");
        System.out.println("Age :" + c.getCustomerAge());
        System.out.println("Account Id: " + a.getAccountId());
        System.out.println("Account Type: " + a.getAccountType());
        System.out.println("Balance: " + a.getBalance());
        System.out.println("Minimum balance: " + a.getMinimumBalance());

    }
}

public class Main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SavingsAccount a;
        Bank bm = new Bank();
        do {
            System.out.println("\n\t1.Create Account\n\t2.Display Account\n\t3.Check Balance"
                    + "\n\t4.Deposit Amount\n\t5.Withdraw Amount\n\t6.Exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();
            System.out.println("");
            switch (choice) {
                case 1:
                    a = bm.createAccount();
                    break;
                case 2:
                    bm.displayAccountInformation();
                    break;
                case 3:
                    bm.checkBalance();
                    break;
                case 4:
                    System.out.print("Enter the amount you want to deposit: ");
                    double amount = sc.nextDouble();
                    bm.depositAmount(amount);
                    break;
                case 5:
                    bm.getWithdrawAmount();
                    break;
                case 6:
                    return;
                default:
                    System.out.println("INVALID INPUT !!");
                    break;
            }
        } while (true);

    }
}
