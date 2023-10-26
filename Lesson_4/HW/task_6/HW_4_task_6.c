#include <stdio.h>
int main()
{
 int k = 34854, h, m, s;
 h = k/3600%24;
 m = k%3600/60;
 s = k%3600%60;
 printf("%d\n%d:%d:%d\n", k, h, m, s);
 return 0;
}
