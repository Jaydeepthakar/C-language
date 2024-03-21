
#include <stdio.h>

int main() {
    
    int n;
    
    printf("enter no:");
    scanf("%d",&n);
    
    if(n<0){
       printf("\n no is negative");
    }else if(n>0){
         printf("\n no is positive");
    }else{
        printf("\n no is neutral");
    }
    
    

    return 0;
}