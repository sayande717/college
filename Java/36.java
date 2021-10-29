interface Hospital
{
    String HospitalName = "Apollo Hospitals", Address = "Kolkata";
    void Display();
}
class Department
{
    int DepartmentNumber;
    String DepartmentName;
    Department (int dno, String dname)
    {
        DepartmentNumber = dno;
        DepartmentName = dname;
    }
    void DisplayDepartment()
    {
        System.out.println("Department Name : "+DepartmentName);
        System.out.println("Department Number : "+DepartmentNumber);
    }
}
class Doctor extends Department implements Hospital
{
    String DoctorName, DoctorQualification;
    Doctor(int deptno, String deptname,String dname, String dqual)
    {
        super(deptno, deptname);
        DoctorName = dname;
        DoctorQualification = dqual;
    }
    void DisplayDoctor()
    {
        System.out.println("Doctor Name : "+DoctorName);
        System.out.println("Qualification : "+DoctorQualification);
    }
    public void Display()
    {
        System.out.println("Hospital Name : "+HospitalName);
        System.out.println("Hospital Address : "+Address);
    }
    void DisplayAll()
    {
        Display();
        DisplayDepartment();
        DisplayDoctor();
    }
}
class Patient extends Department implements Hospital
{
    String PatientName, PatientDisease;
    Patient(String pname, String pdis,int deptno, String deptname)
    {
        super(deptno, deptname);
        PatientName = pname;
        PatientDisease = pdis;
    }
    void DisplayPatient()
    {
        System.out.println("Patient Name : "+PatientName);
        System.out.println("Patient Disease : "+PatientDisease);
    }
    public void Display()
    {
        System.out.println("Hospital Name : "+HospitalName);
        System.out.println("Hospital Address : "+Address);
    }
    void DisplayAll()
    {
        Display();
        DisplayDepartment();
        DisplayPatient();
    }
}
class Assignment2
{
    public static void main(String[] args)
    {
        Doctor d = new Doctor(11,"Dental","S Roy","MBBS");
        Patient p = new Patient("T Das", "Dengue", 12, "Surgery");
        d.DisplayAll();
        p.DisplayAll();
    }
}