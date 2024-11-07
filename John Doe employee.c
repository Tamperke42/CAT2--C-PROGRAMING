// program to form a structure 
/*
Author: Alvin 
Date:7/11/2024
reg no : CT101/G/22739/24
*/
#include<stdio.h>
#include<string.h>
struct employee {
char name [25];
int id;
char department [20];
float salary;
char email[50];
 };

int main (){
struct employee empl; 
strcpy(empl.name,"John Doe");
strcpy(empl.department,"Human Resources");
strcpy(empl.email,"John.doe@company.com");
empl.id=12345;
empl.salary=55000.50;

printf("name:%s\n", empl.name);
printf("department:%s\n", empl.department);
printf("email:%s\n", empl.email);
printf("id:%d\n", empl.id);
printf("salary:%.2f\n", empl.salary);

return 0;
}