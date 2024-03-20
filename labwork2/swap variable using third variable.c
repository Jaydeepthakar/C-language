#include <stdio.h> 
int main()
{
    int a, b, c; 
    printf("Enter two value \n");
    scanf("%d%d", &a, &b);
    printf("Before Swappingn First variable = %d\nSecond variable = %d \n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After Swappingn First variable = %d\nSecond variable = %d\n", a, b);
    return 0;
}