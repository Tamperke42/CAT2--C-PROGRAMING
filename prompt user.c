//user to enter 
/*
Author: Alvin
Reg no: CT101/G/22739/24
Date:7/11/2024
*/

#include<stdio.h>
int main () {
int hoursworked;
float hourlywage;
float grosspay;
float tax;
float netpay;
float overtime;
float increment;

printf("enter the hours worked in a week:");
scanf("%d",&hoursworked);
printf("enter the hourly wage:");
scanf("%f",& hourlywage);

if(hoursworked<41)
{grosspay=hoursworked*hourlywage;}
else{
overtime=hoursworked-40;
increment=overtime*(hourlywage*1.5);
grosspay=(40*hourlywage)+increment;}

if(grosspay<601){
tax=grosspay*0.15;}
else{
tax=grosspay*0.2;}
netpay=grosspay-tax;

printf("grosspay:%.2f\n",grosspay);
printf("tax:%.2f\n",tax);
printf("netpay:%.2f\n", netpay);

return 0;
}