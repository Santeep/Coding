import java.io.*;
import java.util.*;
class Sort_words
{
    public static void main(String[] input)
    {
        int i, j,n,c=1;
        String temp;
        Scanner br= new Scanner(System.in);
        System.out.println("Enter no. of words you want to Sort : ");
        n=br.nextInt();
        String names[] = new String[n];
        System.out.println("Enter "+ n + " words : \n");
        for(i=0; i<n; i++)
        {
            System.out.println("Enter " + c + " word : ");
            names[i] = br.next();
            c++;
        }                
        System.out.println("\nSorting words in Alphabetical Order...\n");
        for(i=0; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(names[j-1].compareTo(names[j])>0)
                {
                    temp=names[j-1];
                    names[j-1]=names[j];
                    names[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            System.out.println(names[i]);
        }
    }
}
