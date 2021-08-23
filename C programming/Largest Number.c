#include<stdio.h>
main()
{
int i, j, k;
printf("Enter any three numbers ");
scanf("%d%d%d", &i, &j, &k);
if((i<j)&&(j<k))
printf(" %d is largest",k);
else if (i<j || j>k)
{
if (i<j && j >k)
printf(" %d is largest",j);
else
printf(" %d is not largest of all",j);
}
}
