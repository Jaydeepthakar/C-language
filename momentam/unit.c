#include<stdio.h>

int main(){

    float bill,surcharge,unit;

    printf("enter unit");
    scanf("%f",&unit);

    if(unit <= 50){
        bill = unit*0.50;
    }else if(unit >= 51 && unit <= 150){
        bill = 25+(unit-150)*0.75;
    }else if(unit >= 151 && unit <= 250){
        bill = 25+75+(unit-250)*0.75;
    }else{
        bill = 25+75+120+(unit-250)*0.75;
    }

    surcharge = bill*20/100;
    bill = bill + surcharge;
    
    printf("total electricity bill is %.2f",bill);
    

}