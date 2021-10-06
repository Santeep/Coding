import java.io.*;
import java.util.*;
class Quadratic_Equation
{
    public static void main(String args[])
    {
        double a, b, c;
        double r1, r2, D, sqrt;
        System.out.println("Enter The Integer Values");
        Scanner sc = new Scanner(System.in);
        System.out.print("\nA:  ");
        a = sc.nextDouble();
        System.out.print("\nB:  ");
        b = sc.nextDouble();
        System.out.print("\nC:  ");
        c = sc.nextDouble();
        System.out.println("\nThe Entered Quadratic Equation : "+a+"x^2 + "+b+"x + "+c);
        if((a==0)&&(b==0)&&(c==0))
        {
            System.out.println("\nEnter atleast two non-zero co-efficients");
            System.exit(0);
        }
        else if(a==0 && b!=0)
            {
                r1= -c/b;
                System.out.println("\nThe roots of the entered equation are:"+r1);
                System.exit(0);
            }
        else if(a==0&&b==0&&c!=0)
        {
            System.out.println("\nThe entered equation has no solution");
            System.exit(0);
        }
        else
        {
            D = b*b - 4*a*c;
            sqrt = Math.sqrt(D);
            if(D<0)
                {
                    System.out.println("\nRoots Are Imaginary\n");
                }
                else if(D == 0)
                {
                    System.out.println("\nRoots are real and equal");
                    r1 = (-b + sqrt) / (2*a);
                    System.out.println("\nRoots are : "+r1);
                } 
                else
                {
                    System.out.println("\nRoots are real and unequal");     
                    r1 = (-b + sqrt) / (2*a);
                    r2 = (-b - sqrt) / (2*a);
                    System.out.println("\nRoot 1 = " + r1 + "\n");
                    System.out.println("Root 2 = " + r2 + "\n");
                }
        }       
}
}
