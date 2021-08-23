#include<stdio.h>
main()
{
struct item
{
int itemno;
char itemname[20];
float rate;
int qty;
};
struct item i;
float tot_amt;
printf("Enter the Item Number \n");
scanf("%d",&i.itemno);
printf("Enter the Item Name \n");
scanf("%s",&i.itemname);
printf("Enter the Rate of the Item \n");
scanf("%f",&i.rate);
printf("Enter the number of %s purchased ",i.itemname);
scanf("%d",&i.qty);
tot_amt = i.rate * i.qty;
printf("Item Number: %d\n",i.itemno);
printf("Item Name: %s\n",i.itemname);
printf("Rate: %f\n",i.rate);
printf("Number of Items: %d\n",i.qty);
printf("Total Amount: %f",tot_amt);
}
