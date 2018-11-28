//https://www.urionlinejudge.com.br/judge/en/problems/view/1581

/*DONE*/

#include <iostream>
#include <string> 
#include <limits>

using namespace std;

class strings
{
public:
	strings(int totalLang);
	~strings();

	void scanLanguageNames();
	void findOutCommonLanguage();
	void printLangNameOfConversation();

private:

	int totalLanguage = 1;
	int index = 0;
	char *p;
	
	string *languageName = NULL;
	bool isNative = true;

	bool stringMatch(char *str1,char *str2);
};

strings::strings(int totalLang)
{
	totalLanguage = totalLang ;

	languageName = new string[totalLanguage];
}

strings::~strings()
{
	cout << endl;
	delete[] languageName;
}

void strings::scanLanguageNames()
{
	for (index = 0; index < totalLanguage; index++)
		cin >> languageName[index];
}

void strings::findOutCommonLanguage()
{
	for (int index = 0; index < totalLanguage; index++)
		if (languageName[index] != languageName[0])
			isNative = false;

}

void strings::printLangNameOfConversation()
{
	if (isNative == true)
		cout << languageName[0];
	else
		cout << "ingles";
}

bool strings::stringMatch(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int totalLanguage = 0;
	
	int counter = 1;

	while (counter <= testCase)
	{
		cin >> totalLanguage;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		strings langNames(totalLanguage);

		langNames.scanLanguageNames();
		
		langNames.findOutCommonLanguage();
		
		langNames.printLangNameOfConversation();

		counter++;
	}

	return 0;
}