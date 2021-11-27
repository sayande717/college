class average
{
    public static void main(String[] args) 
    {
        double array[] = {3.2,4.5,16.6,7.1};
        double sum=0,average;
        for(int counter = 0;counter < 4;counter++)
        {
            sum += array[counter];
        }
        average = sum/4.0;
        System.out.println("Average : "+average);
    }
}