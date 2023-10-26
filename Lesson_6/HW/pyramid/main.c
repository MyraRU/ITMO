#include <stdio.h>

int main()
{
for (int i = 1; i <= 5; i++)
 {
  switch(i)
	{
	case 1:
	printf("    %d\n",1);
	break;

	case 2:
	printf("   %d %d\n",2,1);
	break;

	case 3:
	printf("  %d %d %d\n",3,2,1);
	break;

	case 4:
	printf(" %d %d %d %d\n",4,3,2,1);
	break;

	case 5:
	printf("%d %d %d %d %d\n",5,4,3,2,1);
	break;
	}
 }
return 0;
}
