class ass54 
{
    public static void main(String[] args) 
    {
        int a = 5, b = 0, c[] = { 1, 2, 3 }, d[] = null;
        String s = "Sayan";
        try 
        {
            for (int i = 0; i < 4; i++) 
            {
                try 
                {
                    switch (i)
                    {
                        case 0:
                            System.out.println(a / b);
                            break;
                        case 1:
                            System.out.println(c[5]);
                            break;
                        case 2:
                            System.out.println(s.charAt(8));
                            break;
                        case 3:
                            System.out.println(d[4]);
                            break;
                    }
                } 
                catch (ArithmeticException e) 
                {
                    System.out.println("Exception: " + e + "Invalid division");
                } 
                catch (ArrayIndexOutOfBoundsException e) 
                {
                    System.out.println("Exception: " + e + " crossed array size");
                } 
                catch (StringIndexOutOfBoundsException e) 
                {
                    System.out.println("Exception: " + e + " crossed string size");
                } 
                catch (NullPointerException e) 
                {
                    System.out.println("Exception: " + e + " Invalid use of null reference");
                }
            }
        }
        finally
        {
            System.out.println("Program executing again");
        }
        System.out.println("Quit");
    }
}