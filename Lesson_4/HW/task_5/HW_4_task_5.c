#include <stdio.h>
int main()
{
 int a = 10, b = 20;
 a += b;
 b = a - b;
 a -= b;
 
 printf("a = %d\nb = %d\n", a, b);
 return 0;
}
