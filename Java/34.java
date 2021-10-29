import java.util.*;
abstract class shape 
{
    int length, breadth, radius;
    double area;
    Scanner sc = new Scanner(System.in);
    abstract void PrintArea();
}

class Rectangle2 extends shape
{
    void PrintArea() 
    {
        System.out.println("Enter length and breadth of Rectangle : ");
        length = sc.nextInt();
        breadth = sc.nextInt();
        area = length * breadth;
        System.out.println("Area of rectangle : "+area);
    }
}

class Triangle2 extends shape
{

    void PrintArea() 
    {
        System.out.println("Enter base and height of Triangle : ");
        length = sc.nextInt();
        breadth = sc.nextInt();
        area = (length * breadth) / 2;
        System.out.println("Area of Triangle : "+area);
    }
}

class Circle extends shape
{
    void PrintArea()
    {
        System.out.println("Enter radius of circle : ");
        radius = sc.nextInt();
        area = 3.14 * radius * radius;
        System.out.println("Area of circle : "+area);
    }
}
public class Classwork
{
    public static void main(String[] args) 
    { 		
        Rectangle2 ob1 = new Rectangle2(); 		
        ob1.PrintArea(); 		
        Triangle2 ob2 = new Triangle2(); 		
        ob2.PrintArea(); 		 	
        Circle ob3 = new Circle();
        ob3.PrintArea();
    }
}