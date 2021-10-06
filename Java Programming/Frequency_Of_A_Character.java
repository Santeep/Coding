import java.io.*;
import java.util.Scanner;
class frequency_Character
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any Sentance or any Paragraph : ");
        String s = sc.nextLine().toLowerCase();
        System.out.print("Enter a character to count its frequency in : [" + s + "] : ");
        char c = sc.next(".").toLowerCase().charAt(0);
        int count = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            if (c == s.charAt(i)) 
            {
                count++;
            }
        }
        System.out.println(c + " occurs " + count + " times in " + s);
        sc.close();
    }
}
