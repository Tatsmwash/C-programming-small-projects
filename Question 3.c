#include<stdio.h> 

main() 
{ 
 int a, b, operator ; 
 
 printf("Enter the first integer : ") ; 
 scanf("%d", &a) ;
  
 printf("\nEnter the second integer : ") ; 
 scanf("%d", &b) ;  
 
 printf("\n 1. + ") ; 
 printf("\n 2. - ") ; 
 printf("\n 3. * ") ; 
 printf("\n 4. /") ; 
 printf("\n\nEnter Operator of Choice (1...4) : ") ; 
 scanf("%d", &operator) ;
  
 switch(operator) 
 { 
  case 1 : 
   printf("\n%d + %d = %d\n", a, b, a + b) ; 
   break ; 
  case 2 : 
   printf("\n%d - %d = %d\n", a, b, a - b) ; 
   break ; 
  case 3 : 
   printf("\n%d * %d = %d\n", a, b, a * b); 
   break ; 
  case 4 : 
   printf("\n%d / %d = %d\n", a, b, a / b); 
   break ; 
  default : 
   printf("\n Wrong Operator Choice"); 
   break ; 
 } 

}

