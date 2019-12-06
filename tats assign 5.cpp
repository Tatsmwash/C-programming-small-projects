#include <iostream>
#include <cstring>


using namespace std;

void fourletters();
void Love( char input_letters[]);

int main()
{	
	const int size = 40;
	char input_letters[size];
	char letters; 

	do
	{
		cout << "Enter a line of Four Letter words: \n";

		cin.getline(input_letters,40);

		Love(input_letters);

		cout << "Run the program again ?(Y/N) \n";
		cin >> letters;
		fourletters();
	}while ((letters == 'Y') || (letters == 'y'));

	

	return(0);
}

void Love( char input_letters[] )
{
	int i = 0;
	int count;
	char test_letters[40];

	strncpy(test_letters, input_letters, 40);
	strlen(test_letters);

	if((strlen(test_letters) == 4) && (test_letters[i] != '\0'))
	{
		strncpy(test_letters,"Love", 4);
		i++;
	}

	cout << test_letters << endl;
}

	
void fourletters()
{
	char word;

	do
	{
		cin.get(word);
	}while (word != '\n');
}
