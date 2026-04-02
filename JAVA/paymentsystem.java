import java.util.*;

interface Payment {
    void pay(double amount);
}

class Credit_card implements Payment {
    public void pay(double amount) {
        amount += amount * 2 / 100;
        System.out.println("\n*********************************\nAmount paid by credit card: " + amount
                + "\n*********************************\n");
    }
}

class Debit_card implements Payment {
    public void pay(double amount) {
        amount += amount * 1 / 100;
        System.out.println("\n*********************************\nAmount paid by debit card: " + amount
                + "\n*********************************\n");
    }
}

class UPI implements Payment {
    public void pay(double amount) {
        amount -= amount * 2 / 100;
        System.out.println("\n*********************************\nAmount paid by UPI: " + amount
                + "\n*********************************\n");
    }
}

class Bitcoin implements Payment {
    public void pay(double amount) {
        amount = amount;
        System.out.println("\n****************************\nAmount paid by Bitcoin: " + amount
                + "\n****************************\n");
    }
}

class Paypal implements Payment {
    public void pay(double amount) {
        amount = amount;
        System.out.println("\n*****************************\nAmount paid by Paypal: " + amount
                + "\n*****************************\n");
    }
}

class Payment_Strategy {
    private Payment payment;

    public Payment_Strategy(Payment payment) {
        this.payment = payment;
    }

    public Payment get_payment() {
        return payment;
    }

    public void payAmount(double amount) {
        payment.pay(amount);
    }
}

public class paymentsystem { //Main Class
    public static void main(String args[]) {
        double price = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount to be paid: ");
        price = sc.nextInt();

        Payment Debit_card = new Debit_card();
        Payment Credit_card = new Credit_card();
        Payment UPI = new UPI();
        Payment Bitcoin = new Bitcoin();
        Payment Paypal = new Paypal();

        while (true) {
            System.out.print(
                    "Choose your preferred payment method:\n1.Credit Card (2% Extra Fees)\n2.Debit Card(1% Extra Fees)\n3.UPI(2% Discount)\n4.BitCoin\n5.Paypal\n6.Exit\nEnter your Choice: ");
            int choice;
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    Payment_Strategy pay_1 = new Payment_Strategy(Credit_card);
                    pay_1.payAmount(price);
                    break;
                case 2:
                    Payment_Strategy pay_2 = new Payment_Strategy(Debit_card);
                    pay_2.payAmount(price);
                    break;
                case 3:
                    Payment_Strategy pay_3 = new Payment_Strategy(UPI);
                    pay_3.payAmount(price);
                    break;
                case 4:
                    Payment_Strategy pay_4 = new Payment_Strategy(Bitcoin);
                    pay_4.payAmount(price);
                    break;
                case 5:
                    Payment_Strategy pay_5 = new Payment_Strategy(Paypal);
                    pay_5.payAmount(price);
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid Choice");
            }
        }
    }
}
Enter the amount to be paid: 1000
Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 1

*********************************
Amount paid by credit card: 1020.0
*********************************

Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 2

*********************************
Amount paid by debit card: 1010.0
*********************************

Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 3

*********************************
Amount paid by UPI: 980.0
*********************************

Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 4

****************************
Amount paid by Bitcoin: 1000.0
****************************

Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 5

*****************************
Amount paid by Paypal: 1000.0
*****************************

Choose your preferred payment method:
1.Credit Card (2% Extra Fees)
2.Debit Card(1% Extra Fees)
3.UPI(2% Discount)
4.BitCoin
5.Paypal
6.Exit
Enter your Choice: 6

*/