import java.io.*;
import java.util.*;
class HCF_LCM
{
    public static void main(String args[])
    {
        int a, b, c, d, t, hcf, lcm;
        Scanner br = new Scanner(System.in);               
        System.out.println("Enter 1st Number : ");
        c = br.nextInt();
        System.out.println("Enter 2nd number ; ");
        d = br.nextInt();  
        a = c;
        b = d;
        while(b != 0)
        {
            t = b;
            b = a%b;
            a = t;
        }  
        hcf = a;
        lcm = (c*d)/hcf;       
        System.out.print("HCF of two number is = " +hcf);
        System.out.print("\nLCM of two number is = " +lcm);
    }
}
