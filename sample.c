#include<stdio.h> 
main() 
{ 
 int n1, n2, ch ; 
 
 printf("Enter the first number : ") ; 
 scanf("%d", &n1) ; 
 printf("\nEnter the second number : ") ; 
 scanf("%d", &n2) ; 
 printf("\n[1] -> Addition ") ; 
 printf("\n[2] -> Subtraction ") ; 
 printf("\n[3] -> Multiplication ") ; 
 printf("\n[4] -> Division ") ; 
 printf("\n\nEnter your choice <1...4> : ") ; 
 scanf("%d", &ch) ; 
 switch(ch) 
 { 
  case 1 : 
   printf("\n%d + %d = %d", n1, n2, n1 + n2) ; 
   break ; 
  case 2 : 
   printf("\n%d - %d = %d", n1, n2, n1 - n2) ; 
   break ; 
  case 3 : 
   printf("\n%d * %d = %d", n1, n2, n1 * n2); 
   break ; 
  case 4 : 
   printf("\n%d / %d = %.2f", n1, n2, n1 / n2); 
   break ; 
  default : 
   printf("\nInvalid choice"); 
   break ; 
 } 

}

