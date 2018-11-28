//https://www.urionlinejudge.com.br/judge/en/problems/view/1254

/* DONE :: */

/* Uppercase or lowercases will be ignored inside <> */

#include <iostream>

using namespace std;

#define EOS '\0'

size_t strLen(char*);
bool sameAlphabet(char , char );
void strCopy(char*,const char*);


class Tag
{
public:
	int scanStrings();

	void clear();

	void replace();

	void printOutput();

private:

	char *to = NULL;
	char *with = NULL;
	char *mainString = NULL;
	char *replacedString = NULL;

	bool insideSlash = false;

	size_t toLength = 0, withLength = 0, mainStrLength = 0;

	bool strSame(char *isSame,char *with);
	bool strSameCase(char *isSame,char *with);

	friend Tag& strLengths(Tag& obj);
};


int Tag::scanStrings()
{
	to = new char[11];
	with = new char[5];
	mainString = new char[51];
	replacedString = new char[101];

//	return (cin>>to>>with && cin.getline(mainString,51));
	return scanf("%s %s %51[^\n]",to,with,mainString);
}

void Tag::clear()
{
	delete[] to, with, mainString, replacedString;
	insideSlash = false;
	toLength = withLength = mainStrLength = 0;
}

void Tag::replace()
{
	strLengths(*this);

	char *main = mainString;
	char *replaced = replacedString;

	while (*main)
	{
		if (*main == '<') insideSlash = true;
		else if (*main == '>') insideSlash = false;

		else if (insideSlash && strSame(main, to))
		{
			strCopy(replaced, with);
			main += toLength;
			replaced += withLength;
			continue;
		}

		else if ( !insideSlash && strSameCase(main, to))
		{
			strCopy(replaced, with);
			main += toLength;
			replaced += withLength;
			continue;
		}

		*replaced++ = *main++;
	}
	*replaced = EOS;
}

void Tag::printOutput()
{
	cout << replacedString << endl;
}


/* Returns true if both string are same considering Uppercase and Lowercase */
bool Tag::strSameCase(char * isSame, char * with)
{
	while (*with)
	{
		if (*isSame++ != *with++) return false;
	}
	return true;
}

/* Returns true if both string are same ignoring Uppercase and Lowercase */
bool Tag::strSame(char * isSame, char * with)
{
	while (*with)
	{
		if (!sameAlphabet(*isSame++,*with++)) return false;
	}
	return true;
}


int main()
{
	Tag Text;

	while (Text.scanStrings() != EOF)
	{
		Text.replace();
		Text.printOutput();
		Text.clear();
	}

	return 0;
}



size_t strLen(char * str)
{
	size_t length = 0;
	while (*str++) length++;
	return length;
}

bool isAlphabet(char ch)
{
	return (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'));
}

size_t mod(int x)
{
	return x >= 0 ? x : -x;
}

bool sameAlphabet(char char1, char char2)
{
	if (char1 == char2) return true;

	return (isAlphabet(char1), isAlphabet(char2), mod(char1 - char2) == 32);
}

void strCopy(char *dest, const char *src)
{
	while (*dest++ = *src++);
}

Tag& strLengths(Tag& obj)
{
	obj.toLength = strLen(obj.to);
	obj.withLength = strLen(obj.with);
	obj.mainStrLength = strLen(obj.mainString);

	return obj;
}
