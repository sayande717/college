interface College
{
    String name = "Haldia Institute of Technology";
    void Display();
}
class Department implements College
{
    int deptno;
    String deptname;
    Department(int no,String nm)
    {
        deptno = no;
        deptname = nm;
    }
    public void Display()
    {
        System.out.println(name);
    }
}
class Teacher extends Department
{
    String tname, tqual;
    Teacher(int dno,String dnm,String tn, String tq)
    {
        super(dno, dnm);
        tname = tn;
        tqual = tq;
        System.out.println("Department Name : "+deptname+"\nDepartment No. : "+deptno);
        System.out.println("Teacher Name "+tname+"\nQualification : "+tqual);
    }
}
class ass44
{
    public static void main(String[] args) 
    {
        Teacher t = new Teacher(20, "Information Technology", "ABC", "M.Tech");
        College ref;
        ref = t;
        ref.Display();    
    }
}