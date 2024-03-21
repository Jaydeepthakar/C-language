#include<stdio.h>


int main(){
	   float celsius,fehrenheit;
	   printf("enter temprature in celsius");
	   scanf("%d",&celsius);
	   fehrenheit=(celsius*1.8)+32;
	   printf("celsius in fehrenheit %.2f", fehrenheit);

return 0;
}