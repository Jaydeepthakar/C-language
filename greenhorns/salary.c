#include<stdio.h>


int main(){

	   int sal,grosssal,hra,da,ta;
	   printf("enter salary");
	   scanf("%d",&sal);
	   printf("enter hra");
	   scanf("%d",&hra);
	    printf("enter da");
	   scanf("%d",&da);
	    printf("enter ta");
	   scanf("%d",&ta);
	   
	   grosssal=sal+(sal*hra/100)+(sal*da/100)+((sal*ta/100));
	   
	   
	   printf("final salary is %d",grosssal);

return 0;
}