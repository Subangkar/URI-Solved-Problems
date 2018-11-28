//https://www.urionlinejudge.com.br/judge/en/problems/view/1255

/*

Each case a sentence given :
	 have to find in this single sentence which letter is most repeatedly used
		 if more than one satisfies the condition
			 print them in alphabetic order 
				 print them in lowercase form
Ex ::
"Computers accoount" c->3
					 o->3
					 t->2
					 ..... && c<o
so print "co"

exception ::
"Input"  all are same
so print "inptu"

*/


#include <iostream>
#include <limits>


using namespace std;

char toLower(char ch)
{
	return ('A' <= ch && ch <= 'Z') ? (ch - 'A' + 'a') : ch;
}

bool isSameLetter(char ch1, char ch2)
{
	return toLower(ch1) == toLower(ch2) ? true : false;
}

int maxElementValue(unsigned short array[])
{
	int max = 0;

	for (size_t i = 0; i < 26; i++)
	{
		if (array[i] > max) max = array[i];
	}

	return max;
}

int main()
{
	int testCase = 0;
	cin >> testCase;

	char ch;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // coz extra cin untill enter that is not stored

	while (testCase--)
	{
		unsigned short letter[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };


		while ((ch = toLower(cin.get())) != '\n') // take input & assign to counter
		{
			if (('a' <= ch && ch <= 'z')) letter[ch - 'a']++;
		}

		int maxFrequency = maxElementValue(letter);

		for (int i = 0; i < 26;i++)
		{
			if (letter[i] == maxFrequency) cout << char(i + 'a');		
		}

		cout << endl;
	}

	return 0;
}