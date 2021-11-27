class charno
{
    public static void main(String[] args) 
    {
        String s = "abcd43EF";
        int countdigit = 0,countletter=0;
        for(int counter = 0;counter < s.length();counter++)
        {
            char c = s.charAt(counter);
            if(Character.isDigit(c))
            countdigit++;
            else if (Character.isLetter(c))
            countletter++;
        }
        System.out.println("Number of letters : "+countletter);
        System.out.println("Number of digits : "+countdigit);
    }
}