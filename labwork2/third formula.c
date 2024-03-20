#include <stdio.h> 
int main()
{
  float x, y, z;
  
  printf("Enter value: ");
  scanf("%f %f", &x,&y);
  
  z = (x * x * x) + (y * y * y) + (3 * x * y);
  
  printf("Result = %f\n", z);
    return 0;
}