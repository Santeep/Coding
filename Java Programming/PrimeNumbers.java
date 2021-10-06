import java.io.*;
import java.util.*;
class PrimeNumbers
{
    public static void main(String args[]) 
    {    
        int n,i=2,j=2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter upto which number you want :");   
        try
        {
           n=sc.nextInt();
           if(n>0)
           {
               System.out.println("  The Prime Numbers are : ");
               prime(n);
               System.out.println("");
           }
           else
           {
               System.out.println("Please enter positive integer(Greater than zero) only. ");
           }  
        }
        catch(Exception e)
        {
            System.out.println(e);
            System.out.println("Please enter 'integer greater than zero' only ");
        }     
    }
    static void prime(int a)
    {
        int i=2,j=2;   
        while(a>i)
        {
            while(true)
            {
                if(i%2==0)
                {
                    break;
                }
                if(i%j==0)
                {
                    break;
                }
                else
                {
                    j++;
                }
            }
            if(j==i)
            {
                   System.out.print(" "+ i);
                   j=2;
            }
                   i++;
        }
    }   
}
