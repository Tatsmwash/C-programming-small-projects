#include <stdio.h>
main()
{   			
		char ch; 
		int lnum=0, dnum=0, onum=0;	
		printf ("Please input the character:\n");
		ch = getchar( ) ;
		while( ch != '\n' )
		{
			if ( ch >= '0' && ch <= '9' ) 
				dnum++;
			else 	
				if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) 
			          lnum++;
				else  onum++;			
			ch = getchar( ) ;
		}
		printf("the number of letters is %d\n", lnum);
		printf("the number of digits is %d\n", dnum);
		printf("the number of other characters is %d\n", onum);
}

