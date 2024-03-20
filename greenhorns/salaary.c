#include<stdio.h>
#include<conio.h>

void main(){
	   clrscr();
	   int sal,grosssal,hra,da,ta;
	   printf("enter salary");
	   scanf("%d",&sal);
	   hra=sal*10/100;
	   da=sal*8/100;
	   ta=sal*5/100;
	   grosssal=sal+hra+da+ta;
	   printf("final salary is %d",grosssal);
	   getch();

}