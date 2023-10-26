#include <stdio.h>
int main()
{
 int a = 35, b = 87;
 for (a; a <= b; a++)
 {
 if(a%7 == 1)
 printf("%d, %d\n",a, a%7);
 else if (a%7 == 2)
 printf("%d, %d\n",a, a%7);
 else if (a%7 == 5)
 printf("%d, %d\n",a, a%7);
 }
 return 0;
}
