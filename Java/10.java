class primeno {
    public static void main(String[] args) 
    {
        int i, j, counter = 0;
        System.out.println("Prime numbers - ");
        for (i = 100; i <= 200; i++)
        {
            counter = 0;
            for (j = 1; j <= i; j++)
                if (i % j == 0)
                    counter++;
        if (counter == 2)
            System.out.print(i + " ");
        }
    }
}