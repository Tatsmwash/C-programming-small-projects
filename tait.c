#include<stdio.h> 
main() 
{ 
char a="tatenda\0"; 
printf("who is the inventor of C?\n");
printf ("Please Enter answer:"); 
scanf("%d",&a); 

if(a != "tatenda") 
{ 
printf("YES!");
} 


else
{ 
printf("NO!"); 
}
} 
 
