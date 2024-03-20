#include <stdio.h> 
int main()
{
    int a, b, c; 
    printf("Enter two value \n");
    scanf("%d%d", &a, &b);
    printf("Before Swappingn First variable = %d\nSecond variable = %d \n", a, b);
    a +=b;
    b=a-b;
    a -=b;
    

    printf("After Swappingn First variable = %d\nSecond variable = %d\n", a, b);
    return 0;
}