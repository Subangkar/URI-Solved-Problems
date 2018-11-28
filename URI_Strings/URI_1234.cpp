//https://www.urionlinejudge.com.br/judge/en/problems/view/1234

/*
DONE ::
given in whatever form
	1st Alpha must be UpperCase
	2nd Alpha must be LowerCase
*/

#include <iostream>

using namespace std;

class Strings
{
public:
	Strings(char *sent);
	~Strings();

	void printThisDancedSentence();
	void makeThisADancingSentence(char *normalSent);
private:
//	char *normalSent = NULL;
	char *dancingSent = NULL;

};

Strings::Strings(char *sent)
{
	dancingSent = sent;
}

Strings::~Strings()
{
	cout << endl;
}


void Strings::printThisDancedSentence()
{
	cout << dancingSent;
}

void Strings::makeThisADancingSentence(char *normalSent)
{
	bool secondChar = false;

	while (*normalSent)
	{
		if (('A' <= *normalSent && *normalSent <= 'z')) // change operation If only it's an alphabet
		{
			if (secondChar == true)
			{
				if ('A' <= *normalSent && *normalSent <= 'Z') // changes 2nd Alpha to lowercase if it's currently uppercase
				{
					*normalSent += 'a' - 'A';
				}
				secondChar = false; // if this is second Alpha the next one is first Alpha
			}
			else
			{
				if ('a' <= *normalSent && *normalSent <= 'z') // changes 1st Alpha to uppercase if it's currently lowercase 
				{
					*normalSent += 'A' - 'a';
				}
				secondChar = true; // is Second Alpha only if the prev one is 1st Alpha
			}
		}
		normalSent++; // not alphabet passes without any changes
	}
}

int main()
{
	char *sentence = new char[51];

	while ( cin.getline(sentence,51) )
	{
		Strings Dance(sentence);

		Dance.makeThisADancingSentence(sentence);
	
		Dance.printThisDancedSentence();
	}

	delete[] sentence;
	return 0;
}