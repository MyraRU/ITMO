#include <stdio.h>

int main()
{
 int m;
 printf("Enter month number: ");
 scanf("%d",&m);

 if(m == 12 || m >= 1 && m <= 2)
  printf("winter\n");

   else if (m >= 3 && m <= 5)
   printf("autumn\n");

    else if (m >= 6 && m <= 8)
    printf("summer\n");

     else if (m >= 9 && m <= 11)
     printf("spring\n");

      else
      printf("\n!!! ERROR !!!\n");

 return 0;
}
