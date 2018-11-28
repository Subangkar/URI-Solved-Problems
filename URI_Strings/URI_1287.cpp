//https://www.urionlinejudge.com.br/judge/en/problems/view/1287


#include <iostream>

using namespace std;

int32_t stringToInt(const char*);

int main()
{
	char *numWithChars = NULL;
	int32_t num = 0;

	while ((numWithChars = new char[52]) && cin.getline(numWithChars,51))
	{
		if ((num = stringToInt(numWithChars)) == EOF) cout << "error" << endl;
		else cout << num << endl;

		delete[] numWithChars;
	}

	return 0;
}

int32_t stringToInt(const char *str)
{
	int digitValue = EOF;
	int64_t sum = 0;

	while (*str)
	{
		switch (*str)
		{
		case 'o':
		case 'O':
		case '0':
			digitValue = 0;
			break;
		case 'l':
		case '1':
			digitValue = 1;
			break;
		case '2':
			digitValue = 2;
			break;
		case '3':
			digitValue = 3;
			break;
		case '4':
			digitValue = 4;
			break;
		case '5':
			digitValue = 5;
			break;
		case '6':
			digitValue = 6;
			break;
		case '7':
			digitValue = 7;
			break;
		case '8':
			digitValue = 8;
			break;
		case '9':
			digitValue = 9;
			break;

		case ' ':
		case ',':
		case '.':
			str++;
			continue;

		default:
			return EOF;
		}
		str++;

		sum *= 10;
		sum += digitValue;

		if (sum > 2147483647)
		{
			return EOF;
		}
	}

	return (digitValue == EOF) ? EOF : sum;
}
