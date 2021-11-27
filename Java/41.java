import java.util.Scanner;
class temp
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the numbers : ");
        int matrix[][] = new int[3][2];
        int sum=0;
        for(int i=0;i<3;i++)
        {
            System.out.print("Row "+(i+1)+" ");
            for(int j=0;j<2;j++)
            {
                System.out.print("Column "+(j+1)+" : ");
                matrix[i][j] = in.nextInt();
            }
        }
        System.out.println("Sum of Rows : ");
        for(int i=0;i<3;i++) //Finding sum of each row.
        {
            sum=0;
            for(int j=0;j<2;j++)
            {
                sum+=matrix[i][j];
            }
            System.out.println("Row "+(i+1)+" : "+sum);
        }
        System.out.println("Sum of Columns : ");
        for(int i=0;i<2;i++) //Finding sum of each column.
        {
            sum=0;
            for(int j=0;j<3;j++)
            {
                sum+=matrix[j][i];
            }
            System.out.println("Column "+(i+1)+" : "+sum);
        }
        in.close();
    }
}