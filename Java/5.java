import  java.util.Scanner;
class triangle 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter base of the right angle triangle");
        float base = sc.nextFloat();
        System.out.println("Enter perpendicular of the right angle triangle");
        float perpendicular = sc.nextFloat();
        double hypotenuse = Math.sqrt(Math.pow(base,2)+ Math.pow(perpendicular,2));
        System.out.println("The hypotenuse of triangle is :- " + hypotenuse);
    }
}