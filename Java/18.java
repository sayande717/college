class Room 
{
    int length;
    int width;
    Room(int x, int y) 
    {
        length = x;
        width = y;
    }
    int area() 
    {
        return (length * width);
    }
}
class Bedroom extends Room 
{
    int height;
    Bedroom(int x, int y, int z) 
    {
        super(x, y);
        height = z;
    }

    int volume() {
        return (length * width * height);
    }
}
class Inheritance 
{
    public static void main(String args[]) 
    {
        Bedroom room1 = new Bedroom(10, 20, 30);
        Bedroom room2 = new Bedroom(20, 30, 40);
        int area1 = room1.area();
        int volume1 = room1.volume();
        int area2 = room2.area();
        int volume2 = room2.volume();
        System.out.println("Area of 1st room : " + area1);
        System.out.println("Area of 2nd room : " + area2);
        System.out.println("Volume of 1st room : " + volume1);
        System.out.println("Volume of 2nd room : " + volume2);
    }
}