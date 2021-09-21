import java.util.Scanner;

class armstrongno 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int input, length, check, remainder, sum = 0;
        System.out.println("Enter a number.");
        input = sc.nextInt();
        check = input;
        while (check != 0) 
        {
            remainder = check % 10;
            sum = sum + (remainder * remainder * remainder);
            check = check / 10;
        }
        if (sum == input)
            System.out.println(input + " is an armstrong number.");
        else
            System.out.println(input + " is not an armstrong number.");
    }
}