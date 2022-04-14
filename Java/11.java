import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class sumof2no
{
    public static void main(String[] args) throws IOException //Handles IO Exception errors.
    {
        int a,b,sum;
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in)); //Create a new object 'br' of class 'BufferedReader'.
        System.out.print("Enter two numbers:");
        a = Integer.parseInt(br.readLine()); //Take 1st number as input.
        b = Integer.parseInt(br.readLine()); //Take 2nd number as input.
        sum = a + b; //Calculate the sum.
        System.out.println("Sum: "+sum); //Print the sum.
    }
}