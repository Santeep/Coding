main()
 {
struct emp
{
int empno;
char empname[20];
float sal;
};
struct emp e;
printf ("Enter Employee number: \n");
scanf("%d",&e.empno);
printf (" Enter Employee Name: \n");
scanf("%s",&e.empname);
printf ("Enter the Salary: \n");
scanf("%f",&e.sal);
printf ("Employee No = %d", e.empno);
printf ("\n Emp Name = %s", e.empname);
printf ("\n Salary = %f", e.sal);
 }
