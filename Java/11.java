import java.io.*;
class sumof2no
{
    public static void main(String[] args) throws IOException //throws IOException : Shows runtime errors if they occur.
    {
        int a,b,sum;
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in)); //Create a new object 'br' of class 'BufferedReader'.
        System.out.println("Enter two numbers:");
        a = Integer.parseInt(br.readLine()); //Take 1st number as input.
        b = Integer.parseInt(br.readLine()); //Take 2nd number as input.
        sum = a + b; //Calculate the sum.
        System.out.println("Sum : "+sum); //Print the sum.
    }
}