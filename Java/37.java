interface College
{
    String CollegeName = "Haldia Institute of Technology";
    void DisplayCollege();
}
class Department2
{
    String DepartmentName;
    int DepartmentNumber;
    Department2(String dname,int dno)
    {
        DepartmentName = dname;
        DepartmentNumber = dno;
    }
    void DisplayDepartment()
    {
        System.out.println("Department Name : "+DepartmentName);
        System.out.println("Department Number : "+DepartmentNumber);
    }
}
class Teacher extends Department2 implements College
{
    String TeacherName, Qualification;
    Teacher (String dname, int dno, String tname, String tqual)
    {
        super(dname, dno);
        TeacherName = tname;
        Qualification = tqual;
    }
    void DisplayTeacher()
    {
        System.out.println("Teacher Name : "+TeacherName);
        System.out.println("Qualification : "+Qualification);
    }
    public void DisplayCollege()
    {
        System.out.println("College Name : "+CollegeName);
    }
    void DisplayAll()
    {
        DisplayCollege();
        DisplayDepartment();
        DisplayTeacher();
    }
}
class Assignment3
{
    public static void main(String[] args) 
    {
        Teacher t = new Teacher("Information Technology", 11, "A. Das", "M.Tech");
        t.DisplayAll(); 
    }
}