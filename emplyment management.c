#include <stdio.h>
 
 struct employee{
 	char name [20];
 	int number;
 	int day;
 	char month[12];
 	int year;
 	float salary;
 	
 	
 };
 main()
 {
 	struct employee details;
 	printf("Input Values \n");
 	scanf("%s %d %d %s %d %f",
 			details.name,
 			details.number,
 			&details.day,
 			details.month,
 			&details.year,
 			&details.salary );
 
 
 	printf("%s %d %d %s %d %f\n",
 		details.name,
 			details.number,
 			details.day,
 			details.month,
 			details.year,
 			details.salary	 );
 
 
 
 return 0;
 
 
 }
 
