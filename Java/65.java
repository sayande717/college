interface JointEntrance
{
    void seatExam();
    void getAdmission();
}
class ScienceGroup implements JointEntrance
{
    public void seatExam()
    {
        System.out.println("Seats are available");
    }
    public void getAdmission()
    {
        System.out.println("Admission is going on");
    }
}
class Medical extends ScienceGroup
{
    void display1()
    {
        System.out.println("In medical class");
    }
}
class Engineering extends ScienceGroup
{
    void display2()
    {
        System.out.println("In Engineering class");
    }
}
class BioScience extends Medical
{
    void display3()
    {
        System.out.println("BioScience");
        seatExam();
        getAdmission();
        display1();
    }
}
class PureScience extends Engineering
{
    void display4()
    {
        System.out.println("PureScience");
        seatExam();
        getAdmission();
        display2();
    }
}
class ass53
{
    public static void main(String[] args) 
    {
        BioScience b = new BioScience();
        PureScience p = new PureScience();
        p.display4();
        b.display3();
    }
}