#include<stdio.h>

int main(){

    int a,b,c;

    printf("\n enter three values");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if(a<c){
            printf("a is minimum");
        }else{
            printf("c is minimum");
        }
    }else{
        if(b<c){
            printf("b is minimum");
        }else{
            printf("c is minimum");
        }
    }

    return 0;
}