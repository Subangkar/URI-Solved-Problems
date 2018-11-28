//https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <iostream>
#include<limits>

using namespace std;


class strings
{
#define EOL '\n' // End of Line
#define EOS '\0' // End of String

public:
	void takeStringFromConsole(); // Scan string Including space & Enter bt store until ENTER

	void printEncryptedMessegeInConsole();

	strings();

	~strings();

private:
	char *messege = new char[1000];

	int messegeLength = 0;
	int index = 0;
	char inputCh = 'x';

	int stringLength(char *str) // Including '\0'
	{
		int length = 0;

		while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
		{
			length++;
		}

		return length;
	}

	void stringReverse(char *str);

	void shiftAlphabet3stepsRight(char *str);

	void shiftAllCharsOfLastHalf1StepLeft(char *str);
};

strings::strings()
{

}

strings::~strings()
{
	delete[] messege;
	cout << endl;
}

void strings::takeStringFromConsole() 
{
	index = 0;
	while (cin.get(inputCh) && inputCh != EOL) // cin.get(var) allows to scan with space or ENTER
	{
		*(messege + index) = inputCh;
		index++;
	}
	*(messege + index) = EOS; // brings end to a single messege
	messegeLength = stringLength(messege);
}

void strings::printEncryptedMessegeInConsole()
{
	shiftAlphabet3stepsRight(messege); // Step 1 - Shift Uppercase or Lowercase Char 3 Steps Right

	stringReverse(messege); // Step 2 - Make All chars reversed

	shiftAllCharsOfLastHalf1StepLeft(messege); // Step 3 - Shift Reversed String's greater Last Half 1 Step Left

	cout << messege;
}

void strings::stringReverse(char * str)
{
	char *temp = new char;
	for (int minIndex = 0, maxIndex = stringLength(str) - 1; minIndex < maxIndex; minIndex++, maxIndex--)
	{
		*temp = *(str + minIndex);
		*(str + minIndex) = *(str + maxIndex);
		*(str + maxIndex) = *temp;
	}
	delete temp;
}

void strings::shiftAlphabet3stepsRight(char *str) // All OK
{
	while (*str)
	{
		if ( ('A' <= *str && *str <= 'Z' ) || ( 'a' <= *str && *str <= 'z' )) // move 3 steps if Alphabet
		{
			*str += 3;
		}
		str++;
	}
}

void strings::shiftAllCharsOfLastHalf1StepLeft(char * str) // needs to be changed to set mid index
{
	for (index = (messegeLength >> 1); index <= messegeLength - 1; index++)
	{
		*(str+index) -= 1;
	}
}



int main()
{
	int testCase = 0;
	cin >> testCase;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // coz extra cin untill enter

	int counter = 1;

	while (counter <= testCase)
	{
///		fflush(stdin); // does not work in VS-2015

		strings encrypt;

		encrypt.takeStringFromConsole();

		encrypt.printEncryptedMessegeInConsole();

		counter++;
	}

	return 0;
}

namespace InCUsingArray
{

#include <stdio.h>

#define ENTER '\n'

	char msg[1000];

	int arrayReverse(int minIndex, int maxIndex)
	{
		if (minIndex >= maxIndex) { return 0; }

		char temp = msg[minIndex];
		msg[minIndex] = msg[maxIndex];
		msg[maxIndex] = temp;

		arrayReverse(minIndex + 1, maxIndex - 1);

		return 0;
	}

	int charThreeSteper(int minIndex, int maxIndex, int midIndex)
	{
		if (minIndex>maxIndex) { return 0; } // stop when complete

		if (('A' <= msg[minIndex] && msg[minIndex] <= 'Z') || ('a' <= msg[minIndex] && msg[minIndex] <= 'z'))
		{
			msg[minIndex] = msg[minIndex] + 3;

			if (maxIndex % 2 == 0 && minIndex >= midIndex)
			{
				msg[minIndex] = msg[minIndex] - 1;
			}
			else if (maxIndex % 2 != 0 && minIndex>midIndex)
			{
				msg[minIndex] = msg[minIndex] - 1;
			}
		}

		charThreeSteper(minIndex + 1, maxIndex, midIndex);

		return 0;
	}

	void main()
	{
		int testCase = 0;
		scanf("%d", &testCase);
		fflush(stdin);
		int totalIndexLength = 0;
		int count = 0;

		int revStartIndex = 0;
		int thisStringIndexLength = 0;

		int caseCounter = 1;

		for (caseCounter = 1; caseCounter <= testCase; caseCounter++)
		{
			while (scanf("%c", &msg[count]) && msg[count++] != ENTER);
			int indexLengthXclueEnter = count - 2;
			thisStringIndexLength = count - 1;

			arrayReverse(revStartIndex, indexLengthXclueEnter);

			charThreeSteper(revStartIndex, indexLengthXclueEnter, ((revStartIndex + indexLengthXclueEnter) / 2));

			totalIndexLength = totalIndexLength + thisStringIndexLength;
			revStartIndex = count;
		}

		int index = 0;
		for (index = 0; index <= totalIndexLength - 1; index++)
		{
			printf("%c", msg[index]);
		}

	}

}


/* In C :: with Array


#include <stdio.h>

#define ENTER '\n'

char msg[1000] ;

int arrayReverse(int minIndex,int maxIndex)
{
if(minIndex>=maxIndex) { return 0 ; }

char temp = msg[minIndex] ;
msg[minIndex] = msg[maxIndex] ;
msg[maxIndex] = temp ;

arrayReverse(minIndex+1,maxIndex-1) ;

return 0 ;
}

int charThreeSteper(int minIndex,int maxIndex,int midIndex)
{
if(minIndex>maxIndex) { return 0 ; } // stop when complete

if( ('A'<=msg[minIndex] &&  msg[minIndex]<='Z') || ('a'<=msg[minIndex] &&  msg[minIndex]<='z') )
{
msg[minIndex] = msg[minIndex] + 3 ;

if(maxIndex%2==0 && minIndex>=midIndex)
{
msg[minIndex] = msg[minIndex] - 1 ;
}
else if(maxIndex%2!=0 && minIndex>midIndex)
{
msg[minIndex] = msg[minIndex] - 1 ;
}
}

charThreeSteper(minIndex+1,maxIndex,midIndex) ;

return 0 ;
}

void main()
{
int testCase=0;
scanf("%d",&testCase) ;
fflush(stdin) ;
int totalIndexLength=0 ;
int count = 0 ;

int revStartIndex = 0;
int thisStringIndexLength = 0 ;

int caseCounter = 1 ;

for(caseCounter=1 ; caseCounter<=testCase ; caseCounter++)
{
while( scanf("%c",&msg[count]) && msg[count++]!=ENTER ) ;
int indexLengthXclueEnter = count-2 ;
thisStringIndexLength = count-1 ;

arrayReverse(revStartIndex,indexLengthXclueEnter) ;

charThreeSteper(revStartIndex,indexLengthXclueEnter,( (revStartIndex+indexLengthXclueEnter)/2) ) ;

totalIndexLength = totalIndexLength + thisStringIndexLength ;
revStartIndex = count ;
}

int index = 0 ;
for(index = 0 ; index<=totalIndexLength-1 ; index++)
{
printf("%c",msg[index]) ;
}

}


*/