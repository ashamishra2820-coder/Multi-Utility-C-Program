#include<stdio.h>
#include<conio.h>
main(){
       int angle1, angle2, angle3;

       clrscr();
       printf("Enter the First Angle:");
       scanf("%d", &angle1);

       printf("Enter the Second Angle:");
       scanf("%d", &angle2);

       angle3 = 180 -(angle1 + angle2);

       printf("\nThird Angle =%d, angle3");

       getch();



}