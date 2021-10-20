import java.io.IOException;
import java.io.*;
import java.util.*;
class Remove_Vowels 
{
   public static void main(String args[]) throws IOException
   {
     Scanner sc = new Scanner(System.in);
     System.out.println("----Program to remove vowels from String -----\n ");
     System.out.print("Enter a string: ");
     String str1 = sc.nextLine();
     System.out.print("\nAfter Delete or Remove Vowels :\n Reqd. String is : ");
     String str2 = remove_Vowels(str1);
     System.out.println(str2);
   }
   private static String remove_Vowels(String str)
   {
     String finalString = "";
     for (int i=0; i<str.length(); i++)
     {
       if (!isVowel(Character.toLowerCase(str.charAt(i))))
       {
         finalString += str.charAt(i);
       }
     }
     return finalString;
   }
   private static boolean isVowel(char c) 
   {
     String vowels = "aeiou";
     for (int i=0; i<5; i++)
     {
       if (c == vowels.charAt(i))
         return true;
     }
     return false;
   }
}
