class item
{
    int item_number,code,item_price;
    item(int a,int b,int c)
    {
        item_number=a;
        code=b;
        item_price=c;
    }
    void Display()
    {
        System.out.println("Item number : "+item_number);
        System.out.println("Item code : "+code);
        System.out.println("Price : "+item_price);
    }
    public static void main(String[] args) 
    {
        item i = new item(2,2443,500);
        i.Display();
    }
}