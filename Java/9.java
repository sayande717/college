import java.util.Scanner;
class factorsofanumber
{
    public static void main(String[] args) 
    {
        int i,n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        n=sc.nextInt();
        System.out.println("The factors are - ");
        for(i=1;i<=n;i++)
        if(n%i==0)
        System.out.println(i+" ");
        sc.close();
    }
}