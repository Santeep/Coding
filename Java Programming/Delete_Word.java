import java.io.*;
import java.util.*;
class delete_Words
{
   public static void main(String args[])
   {
       String s1, s2;
       Scanner br = new Scanner(System.in);
       System.out.print("Enter any Sentance or any Paragraph : ");
       s1 = br.nextLine();
       System.out.print("Enter Word to Be Delete From Entered Sentance Or Paragraph  [ " +s1+" ]: ");
       s2 = br.nextLine();
       System.out.print("Deleting all '" + s2 + "' from '" + s1 + "'------->\n");
       s1 = s1.replaceAll(s2, "");
       System.out.println("\nAfter Deletion,The Required Sentance is : [ "+s1+" ]");
   }
}
