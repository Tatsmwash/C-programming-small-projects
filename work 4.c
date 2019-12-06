#include<stdio.h>
int main()
{
	char operator;
	int x,y;

	printf(" Enter Two integers:\n");
	scanf("%d %d",&x,&y);
	
	printf("ENTER OPERATOR /,-,*,+:\n");
	
	scanf("%c",&operator);
	
	operator = getchar();
	
	switch(operator)
	{
		 case '/':
		 	printf("%d/%d=%d " ,x,y,x/y);
		 	break;
		 case '-':
		 	printf("%d-%d=%d",x,y,x-y);
		 	break;
		 case '*':
		 	printf("%d*%d=%d",x,y,x*y);
		 	break;
		 case '+':
		 	printf("%d+%d=%d",x,y,x+y);
		 	break;
		 	
		 default:
 
            printf("error! operator is not correct");
			break;
			
	}
	
}
