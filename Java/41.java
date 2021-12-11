import java.util.Scanner;
class 41
{
    public static void main(String[] args) 
    {
        final int row=3,column=2;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the values : ");
        int matrix[][] = new int[row][column];
        int sum;
        double average;
        for(int i=0;i<row;i++)
        {
            System.out.print("Row "+(i+1)+" ");
            for(int j=0;j<column;j++)
            {
                System.out.print("Column "+(j+1)+" : ");
                matrix[i][j] = in.nextInt();
            }
        }
        System.out.println("Average of Rows : ");
        for(int i=0;i<row;i++) //Finding average of each row.
        {
            sum=0;
            for(int j=0;j<column;j++)
            {
                sum+=matrix[i][j];
            }
            average = sum/2.0;
            System.out.println("Row "+(i+1)+" : "+average);
        }
        System.out.println("Average of Columns : ");
        for(int i=0;i<column;i++) //Finding average of each column.
        {
            sum=0;
            for(int j=0;j<row;j++)
            {
                sum+=matrix[j][i];
            }
            average=sum/3.0;
            System.out.println("Column "+(i+1)+" : "+average);
        }
        in.close();
    }
}