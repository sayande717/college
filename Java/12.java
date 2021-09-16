import java.io.*;
class name
{
    public static void main(String[] args) throws IOException
    {
        String name;
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
        System.out.println("Enter your name : ");
        name = br.readLine();
        System.out.println("Your name is "+name);
    }
}