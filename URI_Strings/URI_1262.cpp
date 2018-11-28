//https://www.urionlinejudge.com.br/judge/en/problems/view/1262
/*
DONE
*/



#include <iostream>

using namespace std;

class strings
{
public:
	strings(char *str, int readNum);
	~strings();

	void printNeededOperationNumber();
private:
	char *stringToRead = NULL ;
	int maxNumberOfContinuousReadOperation = 0;
	int numberOfReadOperationDone = 0;
	int totalNumberOfOperationToDo = 0; 

	void calculateNeededOperationNumber();
};



strings::strings(char * str,int readNum)
{
	stringToRead = str;
	maxNumberOfContinuousReadOperation = readNum;
}

strings::~strings()
{
	cout << endl;
//	delete[] stringToRead;
}

void strings::printNeededOperationNumber()
{
	calculateNeededOperationNumber();

	cout << totalNumberOfOperationToDo;
}


void strings::calculateNeededOperationNumber()
{
#define EOS '\0'
	do // cos the string will never be of 0 length
	{
		if (*stringToRead == 'R' && maxNumberOfContinuousReadOperation != 1)
		{
			numberOfReadOperationDone++;
			if (numberOfReadOperationDone == 1) // for the first R a operation is done
			{
				totalNumberOfOperationToDo++; // always total += 1
				continue;
			}
			else if (numberOfReadOperationDone < maxNumberOfContinuousReadOperation) // till equal next operation not done
			{
				continue;
			}
			else if (numberOfReadOperationDone == maxNumberOfContinuousReadOperation)
			{
				numberOfReadOperationDone = 0; // so that next time it can be started from 0
				continue;
			}
		}

		totalNumberOfOperationToDo++; // in case of W always total += 1

		numberOfReadOperationDone = 0; // so that next time it can be started from 0 if after single R
	} while (*(++stringToRead) != EOS);
}

int main()
{
	char *line = NULL;
	int readAbility = 0;

	while (  ( line = new char[51] )  &&  cin>>line>>readAbility  )
	{
		strings read(line,readAbility);
		read.printNeededOperationNumber();

		delete[] line;
	}

	return 0;
}

namespace last
{
	//https://www.urionlinejudge.com.br/judge/en/problems/view/1262
	/*
	RRRRRR

	*/



#include <iostream>

	using namespace std;

	class strings
	{
	public:
		strings(char *str, int readNum);
		~strings();

		void printNeededOperationNumber();
	private:
		char *stringToRead = NULL;
		int maxNumberOfContinuousReadOperation = 0;
		int numberOfReadOperationDone = 0;
		int totalNumberOfOperationToDo = 0;

#define EOS '\0'

		void calculateNeededOperationNumber();
	};



	strings::strings(char * str, int readNum)
	{
		stringToRead = str;
		maxNumberOfContinuousReadOperation = readNum;
	}

	strings::~strings()
	{
		cout << endl;
		//	delete[] stringToRead;
	}

	void strings::printNeededOperationNumber()
	{
		calculateNeededOperationNumber();

		cout << totalNumberOfOperationToDo;
	}


	void strings::calculateNeededOperationNumber()
	{
		do // cos the string will never be of 0 length
		{
			if (*stringToRead == 'R')
			{
				numberOfReadOperationDone++;
				totalNumberOfOperationToDo++; // always total += 1

				if (numberOfReadOperationDone == maxNumberOfContinuousReadOperation) // till equal next operation not done
				{
					totalNumberOfOperationToDo -= (numberOfReadOperationDone - 1); // if this pack fulfilled totalOp += 1 against those
					numberOfReadOperationDone = 0; // so that next time it can be started from 0
				}
				continue;
			}

			else if (*stringToRead == 'W') // so that space is not counted
			{
				totalNumberOfOperationToDo++; // in case of W always total += 1
			}
			numberOfReadOperationDone = 0; // so that next time it can be started from 0 if after single R
		} while (*(stringToRead++));
	}

	int main()
	{
		char *line = NULL;
		int readAbility = 0;

		while ((line = new char[51]) && cin >> line >> readAbility)
		{
			strings read(line, readAbility);
			read.printNeededOperationNumber();

			delete[] line;
		}

		return 0;
	}

	namespace unnecessaryMethods
	{
		int stringLength(char * str)
		{
			int length = 0;

			while (*str++)
			{
				length++;
			}

			return length;
		}

		int nearestIntValue(double frac)
		{
			int integerPart = frac;
			double fracPart = frac - integerPart;
			if (fracPart != 0)
			{
				integerPart += 1;
			}
			return integerPart;
		}

	}
}

namespace unnecessaryMethods
{
	int stringLength(char * str)
	{
		int length = 0;

		while (*str++)
		{
			length++;
		}

		return length;
	}

	int nearestIntValue(double frac)
	{
		int integerPart = frac;
		double fracPart = frac - integerPart;
		if (fracPart != 0)
		{
			integerPart += 1;
		}
		return integerPart;
	}

}