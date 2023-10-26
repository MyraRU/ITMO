#include <stdio.h>
int main()
{
 int k = 27780, h, m;
 h = k/3600;
 m = k%3600/60;
 printf("%d:%d\n", h, m);
 return 0;
}
