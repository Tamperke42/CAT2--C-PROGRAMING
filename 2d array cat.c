//c array- 2D arrays
/*
Author:Alvin 
Date:7/11/2024
reg no : CT101/G/22739/24
*/
#include<stdio.h>
int main (){

int a,b ;
int scores[2][2]={{62,92},{84,72}};
for(a=0;a<2;a++){
for(b=0;b<2;b++)
printf("scores[%d][%d]=%d\n",a,b,scores[a][b]);
}





return 0;
}