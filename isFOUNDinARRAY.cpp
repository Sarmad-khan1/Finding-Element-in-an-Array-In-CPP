#include <iostream>
using namespace std;
bool check(string word, char letter);
int main()
{
	
	system("cls");
	string word;
	cout << "Enter a word: ";
	cin >> word;

	char letter;
	cout << "Enter a letter: ";
	cin >> letter;

	bool receiver = check(word, letter);

	if (receiver == true)
	{
		cout << letter << " is found in " << word << endl;
	}
	else if (receiver == false)
	{
		cout << letter << " is not found in " << word << endl;
	}

	return 0;
}
bool check(string word, char letter)
{
	bool isFound = false;
	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == letter)
		{
			isFound = true;
			break;
		}
	}
	return isFound;
}