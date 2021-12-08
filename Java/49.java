import java.util.Scanner;
class factors
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number = ");
        int no = in.nextInt();
        System.out.println("Factors  ");
        for(int i=1;i<=no;i++)
        {
            if(no%i==0)
            System.out.print(i+" ");
        }
        System.out.println();
        in.close();
    }
}
