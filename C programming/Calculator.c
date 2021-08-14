#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "Enter the Calculator Operation you want to Perform:"
void Calulator_addition();
void Calulator_subtraction();
void Calulator_multiplication();
void Calulator_division();
void Calulator_modulus();
void Calulator_power();
int  Calulator_factorial();
void calculator_operations();
int main()
{
    char OperationToBePerformed;
    calculator_operations();
    while(1)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        OperationToBePerformed=getche();
 
        switch(OperationToBePerformed)
        {
            case '+': Calulator_addition();
                      break;
 
            case '-': Calulator_subtraction();
                      break;
 
            case '*': Calulator_multiplication();
                      break;
 
            case '/': Calulator_division();
                      break;
 
            case '%': Calulator_modulus();
                      break;
 
            case '!': Calulator_factorial();
                      break;
 
            case '^': Calulator_power();
                      break;
 
            case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'E':
            case 'e': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\nYou have entered unavailable Mathematical option");
    printf("***********\n");
    printf("\nPlease Enter any one of below available ");
    printf("options\n");
                      calculator_operations();
        }
    }
}
 
 
void calculator_operations()
{
    system("cls");
    printf("\n\n WELCOM TO C PROGRAMMING CALCULATOR \n\n");
    printf("Press 'E' or 'e' to Exit the execution of the calculator ");
    printf("\nPress 'H' or 'h' to display the option ");
    printf("\nEnter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter % symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}
 
void Calulator_addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to Add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}
 
void Calulator_subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}
 
void Calulator_multiplication()
{
    int n, total=1, k=0, number;
    printf("\nEnter the number of elements you want to Multiply:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total*number;
        k=k+1;
    }
    printf("Multiplication of %d numbers = %d \n",n,total);
}

void Calulator_division()
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}
 
void Calulator_modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}
 
void Calulator_power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
 
int Calulator_factorial()
{
    int i,fact=1,num;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               
 
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
