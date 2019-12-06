#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *);

 main()
{


	 int Test = 101;


	char charArray[Test];


	cout << "Please enter characters Then press Enter when complete. Minus " << Test - 1 << " Characters\n";
	cin >> charArray;

	
	charArray[Test - 1] = '\0';

	
	cout << "\nYou have entered  characters:\n" << charArray << endl;

	
	reverse(charArray);

	
	cout << "\nCharacters have been reversed:\n" << charArray << endl;

	return 0;
}


void reverse(char *p)
{
	
	char *front, *rear, *temp;
	int cStringSize = strlen(p);
	
	front = p;
	rear = p + (cStringSize - 1); 
	temp = p + (cStringSize); 
	
	for (int i = 0; i < (cStringSize/2); i++)
	{
		*temp = *(front + i);
		*(front + i) = *(rear - i);
		*(rear - i) = *temp;

		
	}

	
	*temp = '\0';

	return;
}


