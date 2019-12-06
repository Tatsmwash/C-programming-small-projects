#include <stdio.h>
main()
{
	int n,b ;
	printf("Enter Number:\n");
	scanf("%d",&n);
  printf("\n");
       printf("Reverse of the number is....\n");
    while(n>0)
    {
       b = n%10;
       printf("%d",b);
      n /= 10;
    }

getch();


	}
