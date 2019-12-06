#include <stdio.h>
int main()
{
	int a; 
	int b;
	printf("Please enter your two numbers:\n");
	scanf("%d%d", &a, &b);
	{
		if(a==b)
		printf("%d == %d\n", a, b);
		else if( a<=b)
		printf("%d <= %d\n", a, b);
		else if(a>=b)
		printf("%d >= %d\n", a, b);
    
	}
}
