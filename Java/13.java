import java.util.Scanner;

class perfectno 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int counter, input, sum = 0;
        System.out.println("Enter a number : ");
        input = sc.nextInt();
        for (counter = 1; counter <= input; counter++) 
        {
            if (input % counter == 0)
                sum = sum + counter;
        }
        if (input == sum)
            System.out.println(input + " is a perfect number.");
        else
            System.out.println(input + " is not a perfect number");
    }
}