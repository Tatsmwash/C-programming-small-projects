# include <stdio.h> 
# include <conio.h> 
 main() 
{ 
 int n, s = 0 ; 
 printf("Enter a number: ") ; 
 scanf("%d", &n) ; 
 while(n > 0) 
 { 
  s = n % 10 ; 
  s = n + n ; 
  n = n / 10 ; 
 } 
 printf("\nThe sum of the digit is: %d", s) ; 
 
}

