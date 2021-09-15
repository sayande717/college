class avgarray
{
    public static void main(String[] args) 
    {
        double arr[]={1.2,3.5,7.9,8.6};
        double sum=0,average;
        int i;
        for(i=0;i<4;i++)
        {
            sum=sum+arr[i];
        }
        average=sum/4;
        System.out.println("the Average is "+average);
    }    
}