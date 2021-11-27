import java.util.Scanner;
class primecheck
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int number,counter=0;
        System.out.print("Enter a number : ");
        number = sc.nextInt();
        for(int i = 1;i <= number;i++)
        {
            if(number%i==0)
            counter++;
        }
        if(counter==2)
        System.out.println(number+" is a prime number.");
        else
        System.out.println(number+" is not a prime number.");
        sc.close();
    }
}