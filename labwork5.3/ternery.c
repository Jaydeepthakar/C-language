#include <stdio.h>

int main()
{
    int a, b, c,small;

    printf("enter three values");
    scanf("%d %d %d", &a, &b, &c);

    small = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("\nSmallest = %d", small);

    return 0;
}