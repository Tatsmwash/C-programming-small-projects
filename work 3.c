#include <stdio.h>
int main()
{
 int a,b;
 printf("enter two numbers:\n");
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
