import java.util.Scanner;

class studentdetails
{
    String name;
    int cl,marks1,marks2,marks3;
    double average;
    studentdetails(String n,int c,int m1,int m2,int m3)
    {
        name = n;
        cl = c;
        marks1  = m1;
        marks2 = m2;
        marks3 = m3;
        average = (marks1+marks2+marks3)/3.0;
    }
    void DisplayDetails()
    {
        System.out.println("Student Details : ");
        System.out.println("Name : "+name);
        System.out.println("Class : "+cl);
        System.out.println("Marks : ");
        System.out.println("Subject 1 : "+marks1);
        System.out.println("Subject 1 : "+marks2);
        System.out.println("Subject 1 : "+marks3);
        System.out.println("Average marks : "+average);
    }
    public static void main(String[] args) 
    {
        String studentname;
        int studentclass,studentmarks1,studentmarks2,studentmarks3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Student details.");
        System.out.println("Name : ");
        studentname=sc.nextLine();
        System.out.println("Class : ");
        studentclass=sc.nextInt();
        System.out.println("Marks :");
        System.out.println("Subject 1 : ");
        studentmarks1=sc.nextInt();
        System.out.println("Subject 2 : ");
        studentmarks2=sc.nextInt();
        System.out.println("Subject 3 : ");
        studentmarks3=sc.nextInt();
        studentdetails sd = new studentdetails(studentname,studentclass,studentmarks1,studentmarks2,studentmarks3);
        sd.DisplayDetails(); 
    }
}