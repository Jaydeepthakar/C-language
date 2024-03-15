#include<stdio.h>
int main(){
       int no;
       printf("Please enter Any Number");
       scanf("%d",&no);

       if((no%5==0)&&(no%11==0)){
              printf("divded by 5 & 11");
       }else{
              printf("not divded by 5 & 11");
       }
}