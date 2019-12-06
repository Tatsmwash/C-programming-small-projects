#include <stdio.h>
main()
{

char s1[] = "New Delhi";
char s2[] = "Bangalore";
strncpy(s1,s2,3);
printf("%s",s1);
}
