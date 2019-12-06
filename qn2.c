#include<stdio.h>
main()
{
int n,i,sum=0;

printf("Enter the value of n :");
scanf("&n");
for(i=1;i<=n;i++)
{
sum=sum+1/n; 
}
printf("Value for harmonic series : ",sum);
getch();
}


