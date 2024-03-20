#include <stdio.h> 
int main()
{
  float x, y, z;
  
  printf("Enter value: ");
  scanf("%f %f", &x,&y);
  
  z = (x * x) + (y * y) + (2 * x * y);
  
  printf("Result = %f\n", z);
    return 0;
}