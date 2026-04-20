#include<stdio.h>
#include<conio.h>
main(){
       int b, h, d, t, g;

       clrscr();
       printf(" Enter Basic Salary:");
	scanf("%d", &b);

       printf(" Enter HRA:");
       scanf("%d", &h);

       printf(" Enter Basic DA:");
       scanf("%d", &d);

       printf(" Enter BasIC TA:");
       scanf("%d", &t);

       g = b *(100 + h + d + t)/ 100;
       printf("Gross Salary%d",g);



       getch();


}