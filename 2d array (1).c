//c array- 2D arrays
/*
Author:Alvin 
Date:7/11/2024
reg no : CT101/G/22739/24
*/
#include<stdio.h>
int main (){

int c,d;
int scores[2][2]={{35,70},{59,67}};
for(c=0;c<2;c++){
for(d=0;d<2;d++)
printf("scores[%d][%d]=%d\n",c,d,scores[c][d]);
}

return 0;
}