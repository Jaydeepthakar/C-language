#include <stdio.h>

int main() {
  int i=1,j=1,k;
for(i=1;i<=5;i++){
   k=5;
    for(j=1;j<=5;j++){
        if(i+j<=6){
            printf("%d",k);
            k--;
        }else{
            printf(" ");
        }
        
    }printf("\n");
}


    return 0;
}