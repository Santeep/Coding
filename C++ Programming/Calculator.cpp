#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
        cout<<endl;
        cout<<KEY;
 
        cin>>OperationToBePerformed;
 
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
 
    cout<<"\nYou have entered unavailable Mathematical option";
    cout<<"\nPlease Enter any one of below available ";
    cout<<"options\n";
                      calculator_operations();
        }
    }
}
 
 
void calculator_operations()
{
    system("cls");
    cout<<"\n\n WELCOM TO C++ PROGRAMMING CALCULATOR \n\n"
    "Press 'E' or 'e' to Exit the execution of the calculator "
    "\nPress 'H' or 'h' to display the option "
    "\nEnter 'C' or 'c' to clear the screen and"
    " display available option \n\n"
    "Enter + symbol for Addition \n"
    "Enter - symbol for Subtraction \n"
    "Enter * symbol for Multiplication \n"
    "Enter / symbol for Division \n"
    "Enter % symbol for Modulus\n"
    "Enter ^ symbol for Power \n"
    "Enter ! symbol for Factorial \n\n";
}
 
void Calulator_addition()
{
    int n, total=0, k=0, number;
    cout<<("\nEnter the number of elements you want to Add:");
    cin>>n;
    cout<<"Please enter numbers one by one: \n";
    while(k<n)
    { 
        cin>>number;
        total=total+number;
        k=k+1;
    }
    cout<<"Sum of numbers = \n"<<total;
}
 
void Calulator_subtraction()
{ 
    int a, b, c = 0; 
    cout<<"\nPlease enter first number  : "; 
    cin>>a; 
    cout<<"Please enter second number : "; 
    cin>>b; 
    c = a - b; 
    cout<<"\n num1 - num2 = \n"<<c; 
}
 
void Calulator_multiplication()
{
    int n, total=1, k=0, number;
    cout<<"\nEnter the number of elements you want to Multiply:";
    cin>>n;
    cout<<"Please entern umbers one by one: \n";
    while(k<n)
    { 
        cin>>number;
        total=total*number;
        k=k+1;
    }
    cout<<"Multiplication of  numbers =  \n"<<total;
}

void Calulator_division()
{
    int a, b, d=0; 
    cout<<"\nPlease enter first number  : "; 
    cin>>a; 
    cout<<"Please enter second number : "; 
    cin>>b;
    d=a/b;
    cout<<"\nDivision of entered numbers=\n"<<d;
}
 
void Calulator_modulus()
{
    int a, b, d=0; 
    cout<<"\nPlease enter first number   : "; 
    cin>>a; 
    cout<<"Please enter second number  : "; 
    cin>>b;
    d=a%b;
    cout<<"\nModulus of entered numbers = "<<d;
}
 
void Calulator_power()
{
    double a,num, p;
    cout<<"\nEnter two numbers to find the power \n";
    cout<<"number: ";
    cin>>a;
 
    cout<<"power : ";
    cin>>num;
 
    p=pow(a,num);
 
    cout<<"\n to the power =  \n"<<p;
}
 
int Calulator_factorial()
{
    int i,fact=1,num;
 
    cout<<"\nEnter a number to find factorial : ";
    cin>>num;
 
    if (num<0)
    {
        cout<<"\nPlease enter a positive number to"
        " find factorial and try again. \n"
        "\nFactorial can't be found for negative"
        " values. It can be only positive or 0  \n";
        return 1;
    }               
 
    for(i=1;i<=num;i++)
    fact=fact*i;
    cout<<"\n";
    cout<<"Factorial of entered number  is:\n"<<fact;
    return 0;
}
