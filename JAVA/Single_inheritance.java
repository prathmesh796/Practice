class Parent
{
    Parent()
    {
        System.out.println("parent class constructor");
    }
}

class Child extends Parent
{
    Child()
    {
        System.out.println("child class constructor");
    }
}

public class Single_inheritance 
{
    public static void main(String[] args) {
        Child d = new Child();
    
    }
}
