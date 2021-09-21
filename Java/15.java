class roomarea 
{
    int length;
    int breadth;

    roomarea(int x, int y) 
    {
        this.length = x;
        this.breadth = y;
    }

    int area() 
    {
        return length * breadth;
    }
    public static void main(String[] args) 
    {
        roomarea ar = new roomarea(4, 6);
        int a = ar.area();
        System.out.println("Area of the room is : " + a);
    }
}