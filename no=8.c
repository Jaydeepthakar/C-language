#include <stdio.h>

int main() {
   int i=1,j=1,k=1;
for(i=1;i<=5;i++){
    k=45;
    for(j=1;j<=5;j++){
        if(i>=j){
            printf("%d",k);
            k++;
        }else{
            printf(" ");
        }
        
    }printf("\n");
}

    return 0;
}