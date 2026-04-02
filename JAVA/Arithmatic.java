import java.util.*;

class Complex
{
 float real;
 float img;
 
 Complex()
 {
  real = 0;
  img = 0;
 }
 
 Complex(float r, float i)
 {
  real = r;
  img = i;
 }
 
 void display()
 {
  System.out.println(real + " + " + img + "i");
 }
 
 // function for addition of complex numbers
 void addition(Complex s1, Complex s2)
 {
  float r, i;
  r = s1.real + s2.real;
  i = s1.img + s2.img;
  System.out.println(r + " + " + i + "i");
 }
 
 // function for subtration of complex numbers
 void subtration(Complex a1, Complex a2)
 {
  float r, i;
  r = a1.real - a2.real;
  i = a1.img - a2.img;
  System.out.println(r + " + " + i + "i");
 }
 
 // function for multiplication of complex numbers
 void multiplication(Complex b1, Complex b2)
 {
  float r, i;
  r = (b1.real * b2.real) - (b1.img * b2.img);
  i = (b1.real * b2.img) + (b1.img * b2.real);
  System.out.println(r + " + " + i + "i");
 }
 
 // function for division of complex numbers
 void division(Complex d1, Complex d2)
 {
  float r, i;
  r = ((d1.real * d2.real) + (d1.img * d2.img)) / ((d2.real * d2.real) + (d2.img * d2.img));
  i = ((d1.img * d2.real) - (d1.real * d2.img)) / ((d2.real * d2.real) + (d2.img * d2.img));
  System.out.println(r + " + " + i + "i");
 }
}

public class Arithmatic
{
 public static void main(String args[])
 {
  float r, i;
  
  System.out.println("Enter the real and imaginary parts of first complex number:");
  Scanner sc = new Scanner(System.in);
  r = sc.nextFloat();
  i = sc.nextFloat();
  Complex c1 = new Complex(r, i);
  
  System.out.println("Enter the real and imaginary parts of second complex number:");
  r = sc.nextFloat();
  i = sc.nextFloat();
  Complex c2 = new Complex(r, i);
  
  Complex c3 = new Complex();
  
  System.out.println("Addition of complex numbers :");
  c3.addition(c1, c2);
  
  System.out.println("Subtration of complex numbers :");
  c3.subtration(c1, c2);
  
  System.out.println("Multiplication of complex numbers :");
  c3.multiplication(c1, c2);
  
  System.out.println("Division of complex numbers :");
  c3.division(c1, c2);
 } 
}