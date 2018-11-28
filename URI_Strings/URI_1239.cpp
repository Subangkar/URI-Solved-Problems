//https://www.urionlinejudge.com.br/judge/en/problems/view/1239

/* A sentence is ended by ::::::::::

','		';'		 '.'	'!'		'?'		'-'			'('		')'	

Scan a line Until Enter And Print it

*/

/* DONE */

#include <iostream>
#include <limits>

using namespace std;

class strings
{
public:
	strings(char * text);
	~strings();

//	void scanTextSentence();
	void printHTMLCodeOfThisLine();

private:
	#define EOS '\0' // End of String
	#define ENTER '\n'

	char *textSentence = new char[51];
	char *htmlSentence = new char[176];

	int slashCounter = 0; // ' _ '
	int starCounter = 0;  // ' * '

	int stringLength(char *str) // Including '\0'
	{
		int length = 0;

		while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
		{
			length++;
		}

		return length;
	}


	char* textToHTML(char *text);

} ;

strings::strings(char *text)
{
	textSentence = text;
}

strings::~strings()
{
	delete[] htmlSentence;
//	cout << endl;
}

/*
void strings::scanTextSentence()
{
	int index = 0; // index used so that the address does not get changed

	while (cin.get(*(textSentence + index)))
	{

		if (*(textSentence + index) == ',' || *(textSentence + index) == ';' || *(textSentence + index) == '.' || *(textSentence + index) == '!' || *(textSentence + index) == '?' || *(textSentence + index) == '-' || *(textSentence + index) == '(' || *(textSentence + index) == ')')
		{
//			*(textSentence + index + 1) = ENTER;
			*(textSentence + index + 1) = EOS;
			printHTMLCode();
			index = 0; // start from beginning @ next
			continue;
		}
		
		index++;
	}
}
*/

void strings::printHTMLCodeOfThisLine()
{
	htmlSentence = textToHTML(textSentence);

	cout << htmlSentence << endl;
}


char* strings::textToHTML(char *text)
{
	char *html = new char[176];

	int address = 0; // refers in what index it's currently on
	while (*text)
	{

		switch (*text) // only replace if char is '_' or '*'
		{
		case '_':

			slashCounter++;

			*html++ = '<'; // means *html = '<' & then html++

			if (slashCounter == 2)
			{
				*html++ = '/';

				address += 1;
				slashCounter = 0; // so that next time it can be started from 0
			}

			*html++ = 'i';
			*html++ = '>';

			address += 3;

			break;

		case '*':

			starCounter++;

			*html++ = '<'; // means *html = '<' & then html++

			if (starCounter == 2)
			{
				*html++ = '/';

				address += 1;
				starCounter = 0; // so that next time it can be started from 0
			}

			*html++ = 'b';
			*html++ = '>';

			address += 3;

			break;

		default :
			*html++ = *text; // always pass to next
			address++;
		}

		text++;
	}

	*html = EOS;

	html = html - address ; // will have to solve

	return html;
}

int main()
{
	char *normalLine = new char[51];

	while (cin.getline(normalLine,51))
	{

		strings HTML(normalLine); // Prob to Send @ this Time

		HTML.printHTMLCodeOfThisLine();
	}
	
	
	return 0;
}


namespace longProg
{
	//https://www.urionlinejudge.com.br/judge/en/problems/view/1239

	/* A sentence is ended by ::::::::::

	','		';'		 '.'	'!'		'?'		'-'			'('		')'

	*/

	/* NOT DONE :: SCAN UNTIL EOF */

#include <iostream>

	using namespace std;

	class strings
	{
	public:
		strings();
		~strings();

		void scanTextSentence();
		void printHTMLCode();

	private:
#define EOS '\0' // End of String
#define ENTER '\n'
		char *textSentence = new char[51];
		char *htmlSentence = new char[176];

		int slashCounter = 0; // ' _ '
		int starCounter = 0;  // ' * '

		int stringLength(char *str) // Including '\0'
		{
			int length = 0;

			while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
			{
				length++;
			}

			return length;
		}

		char* textToHTML(char *text);

	} HTML;

	strings::strings()
	{
	}

	strings::~strings()
	{
		delete[] textSentence, htmlSentence;
		//	cout << endl;
	}

	void strings::scanTextSentence()
	{
		int index = 0; // index used so that the address does not get changed

		while (cin.get(*(textSentence + index)))
		{

			if (*(textSentence + index) == ',' || *(textSentence + index) == ';' || *(textSentence + index) == '.' || *(textSentence + index) == '!' || *(textSentence + index) == '?' || *(textSentence + index) == '-' || *(textSentence + index) == '(' || *(textSentence + index) == ')')
			{
				//			*(textSentence + index + 1) = ENTER;
				*(textSentence + index + 1) = EOS;
				printHTMLCode();
				index = 0; // start from beginning @ next
				continue;
			}

			index++;
		}
	}

	void strings::printHTMLCode()
	{
		htmlSentence = textToHTML(textSentence);

		cout << htmlSentence << endl;
	}

	char* strings::textToHTML(char *text)
	{
		char *html = new char[176];

		int address = 0; // refers in what index it's currently on
		while (*text)
		{

			switch (*text) // only replace if char is '_' or '*'
			{
			case '_':

				slashCounter++;

				if (slashCounter == 1)
				{
					*html++ = '<'; // means *html = '<' & then html++
					*html++ = 'i';
					*html++ = '>';

					address += 3;
				}

				else if (slashCounter == 2)
				{
					*html++ = '<';
					*html++ = '/';
					*html++ = 'i';
					*html++ = '>';

					address += 4;

					slashCounter = 0; // so that next time it can be started from 0
				}

				break;

			case '*':

				starCounter++;

				if (starCounter == 1)
				{
					*html++ = '<'; // means *html = '<' & then html++
					*html++ = 'b';
					*html++ = '>';

					address += 3;
				}

				else if (starCounter == 2)
				{
					*html++ = '<';
					*html++ = '/';
					*html++ = 'b';
					*html++ = '>';

					address += 4;

					starCounter = 0; // so that next time it can be started from 0
				}

				break;

			default:
				*html++ = *text; // always pass to next
				address++;
			}

			text++;
		}

		*html = EOS;

		html = html - address; // will have to solve

		return html;
	}

	int main()
	{

		HTML.scanTextSentence();

		return 0;
	}

}