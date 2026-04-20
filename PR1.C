#include<stdio.h>
#include<conio.h>
main(){
       float C;
       float F;
       clrscr();

       printf("The temperature in Celsius");
       scanf("%f",&C);
       F=(C*9/5)+32;
       printf("The temperature in Fahrenheit is %f",F);
       getch();



}