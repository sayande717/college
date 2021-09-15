class substring
{
    public static void main(String[] args) 
    {
        String s="Information Technology";
        int length=s.length();
        String s1=s.substring(length-10,length);
        System.out.println("The substring is = "+s1);    
    }
}