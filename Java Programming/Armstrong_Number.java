import java.io.*;
import java.util.*;
import java.lang.Math;
class Armstrong_Number
{
    public static void main(String args[])
    {
        int num1, num2, i, n, rem, temp, count=0,a;
        Scanner br = new Scanner(System.in);
        System.out.println("Enter the Interval :\n");             
        System.out.println("Enter Starting Number : ");
        num1 = br.nextInt();
        System.out.println("Enter Ending Number : ");
        num2 = br.nextInt();
        for(i=num1; i<num2; i++)
        {
            temp = i;
            n = 0;
            a=countdigit(temp);
            while(temp!=0)
            {
                rem = temp%10;
                temp = temp/10;
                n = (int) (n + Math.pow(rem,a)) ;
            }
            if(i == n && i>10)
            {
                if(count == 0)
                {
                    System.out.println("Armstrong Numbers Between the Given Interval are :\n");
                }
                System.out.println(i + "  ");
                count++;
            }
        }
        if(count == 0)
        {
            System.out.println("Armstrong Number not Found between the Given Interval.");
        }
    }
    public static int countdigit(int n)
    {
      int c=0;
      while(n>0)
      {
          n=n/10;
          c++;
      }
      return c;
    }
}
