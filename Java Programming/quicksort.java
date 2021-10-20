import java.io.*;
import java.util.*;
class QuickSort 
{    
static int [] enter_data()
    {
        int i,n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of elements u want to sort :");
        n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter elements--->");        
        for(i=0;i<n;i++)
        {
            System.out.print((i+1)+" Element : ");
            a[i]=sc.nextInt();
        }
        return a;
    }
static void quicksort(int a[],int p,int r)
   {
       if(p<r)
       {
          int q;
          q=partition(a,p,r);
          quicksort(a,p,q);
          quicksort(a,q+1,r);   
       }
   }
static int partition(int a[],int p,int r)
   {
        int i, j, pivot, temp;
        pivot = a[p];
        i = p;
        j = r;
        while(true)
        {
         while(a[i] < pivot && a[i] != pivot)
         {
            i++;
         }
         
         while((a[j] > pivot) && (a[j] != pivot))
         {
         
             j--;
         }
         
         if(i < j)
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
         else
         {
            return j;
         }
        }
    }
static void printarray(int arr[])
    {
        int i,len;
        len=arr.length;
         System.out.println("\nAfter Sorting Elements are : ");
         for(i=0;i<len;i++)
        {
            System.out.println((i+1)+" Element : "+arr[i]);
        }
    }
public static void main(String[] args) 
{        
        int a[],b[],p=0,r;       
        a=enter_data();
        r=a.length;
        quicksort(a,p,r-1);
        printarray(a);
}    
}
