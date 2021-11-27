class countvowel
{
    public static void main(String[] args)
    {
        String s = "abekrnkUfnO";
        int i=0,countvowel=0;
        while(i<s.length())
        {
            char c = s.charAt(i);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            countvowel++;
            i++;
        }
        System.out.println("Number of vowels : "+countvowel);
    }
}