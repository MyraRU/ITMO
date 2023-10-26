#include <stdio.h>
#define SWAP(type, a, b) ({ typeof (a) tmp = a, a = b, b = tmp; })

int main()
{
 SWAP (int, 10, 20);
 printf ("a = %d\nb = %\nb", a, b);

 SWAP (float, 10.1, 20.2);
 printf ("a = %f\nb = %f", a, b);
 return 0;
}
