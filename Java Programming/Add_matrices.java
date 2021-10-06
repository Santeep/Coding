import java.io.*;
import java.util.*; 
class Add_matrices 
{
   public static void main(String args[])
   {
      int a, b, c,d;
      Scanner br = new Scanner(System.in); 
      System.out.println("Enter the number of rows and columns of matrix");
      a= br.nextInt();
      b= br.nextInt();
      int first[][] = new int[a][b];
      int second[][] = new int[a][b];
      int sum[][] = new int[a][b];
      System.out.println("Enter the elements of first matrix");
      for (  c = 0 ; c < a ; c++ )
         for ( d = 0 ; d < b ; d++ )
         {
            System.out.print(c+""+d+" Element : ");
            first[c][d] = br.nextInt();
         }
      System.out.println("Enter the elements of second matrix");
      for ( c = 0 ; c < a ; c++ )
         for ( d = 0 ; d < b ; d++ )
         {
             System.out.print(c+""+d+" Element : ");
            second[c][d] = br.nextInt();
         }
      for ( c = 0 ; c < a ; c++ )
         for ( d = 0 ; d < b ; d++ )
             sum[c][d] = first[c][d] + second[c][d];
             System.out.println("Sum of entered matrices:-");
      for ( c = 0 ; c < a ; c++ )
      {
         for ( d = 0 ; d < b ; d++ )
            System.out.print(sum[c][d]+"\t");
         System.out.println();
      }
   }
}
