#include <stdio.h>

int main()
{
 int num;
 printf("Enter number: \n");
 scanf("%d",&num);

for (int i = 1; i <= 10; i++)
 {
 int sum = num * i;
 printf("%d x %d = %d\n",num, i, sum);
 }
return 0;
}
