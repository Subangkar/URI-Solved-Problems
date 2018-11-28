//https://www.urionlinejudge.com.br/judge/en/problems/view/1199


#include <iostream>

using namespace std;

namespace algebricCalc
{
	double  power(double num, int pow)
	{
		/* |||| Using Loop ||||

		double mult=1 ;

		double count=1;
		while(count<=pow)
		{
		mult = mult*num ;

		count++ ;
		}
		return mult ;
		*/
		if (pow == 1) { return num; }
		else if (pow == 0) { return 1; }

		double powerResult = num * power(num, pow - 1);

		return powerResult;
	}
	
}

namespace stringMethods
{
	int strLength(char *str)
	{
		int length = 0;

		while (*str++)	length++;

		return length;
	}

	void strReverse(char *str)
	{
		for (int minIndex = 0, maxIndex = strLength(str) - 1; minIndex < maxIndex; minIndex++, maxIndex--)
		{
			*(str + minIndex) ^= *(str + maxIndex);
			*(str + maxIndex) ^= *(str + minIndex);
			*(str + minIndex) ^= *(str + maxIndex);
		}
	}

	int stringToInteger(char *str)
	{
		int index = strLength(str) - 1;

		int bitIntValue = 0;
		int bitPos = 0;
		char bitCharValue = 'X';

		int stringIntValue = 0;

		do
		{
			bitCharValue = *(str + index);

			if ('0' <= bitCharValue && bitCharValue <= '9') // only char [0,9] are converted to int
			{
				bitIntValue = bitCharValue - '0';

				stringIntValue += (bitIntValue * algebricCalc::power(10, bitPos));

				bitPos++;
			}

		} while (index-- != 0); // stops when index=0 executed

		return stringIntValue;
	}
}

namespace baseConverter
{

	int swapHexToDec(char bitValue)
	{
		switch (bitValue)
		{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;

		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;

		case 'a': return 10;
		case 'b': return 11;
		case 'c': return 12;
		case 'd': return 13;
		case 'e': return 14;
		case 'f': return 15;
		default:
			break;
		}
	}

	char swapDecToHex(int bitValue)
	{
		switch (bitValue)
		{
		case  0: return '0';
		case  1: return '1';
		case  2: return '2';
		case  3: return '3';
		case  4: return '4';
		case  5: return '5';
		case  6: return '6';
		case  7: return '7';
		case  8: return '8';
		case  9: return '9';
		case 10: return 'A';
		case 11: return 'B';
		case 12: return 'C';
		case 13: return 'D';
		case 14: return 'E';
		case 15: return 'F';

		default:
			return EOF;
		}
	}


	int hexaToDecimal(char *num)
	{
		int sum = 0;

		int index = stringMethods::strLength(num) - 1;

		int bitPos = 0;
		do
		{
			char bitHexValue = num[index]; // starting from the last

			int bitDecValue = swapHexToDec(bitHexValue);

			sum += (bitDecValue * algebricCalc::power(16, bitPos));
//			sum += (bitDecValue * (2 << (4 + bitPos)));

			bitPos++;

		} while (index-- != 0);

		return sum;
	}

	char* decimalToHexa(int num)
	{
		char *sum = new char[20];

		int index = 0;
		while (num > 0)
		{
			int bitDecValue = num % 16; // getting the bit value each time

			sum[index++] = swapDecToHex(bitDecValue); // storing to sum but in reversed form

			num >>= 4; // num /= 16
		}

		sum[index] = '\0'; // end the string
		
		stringMethods::strReverse(sum);

		return sum;
	}

}

namespace consoleIO
{
	char *inputNumberStr = new char[13];

	int outputDecimalNumber = 0;
	char *outputHexNumber = new char[11];
		
	int scanAndPrintNumber()
	{
		cin.getline(inputNumberStr,12);

		if (inputNumberStr[0] == '-')
		{
			return EOF;
		}
	}

	int printOutput(int dec)
	{
		cout << dec << endl;

		return 0;
	}

	int printOutput(char *hex)
	{
		cout << "0x" << hex << endl;

		return 0;
	}

	int getOutput()
	{
		if (inputNumberStr[0] == '0' && inputNumberStr[1] == 'x') // so the num is hex :: DONE
		{
			outputDecimalNumber = baseConverter::hexaToDecimal(inputNumberStr+2);

			printOutput(outputDecimalNumber);
		}
		else // needs to be corrected
		{
			outputDecimalNumber = stringMethods::stringToInteger(inputNumberStr);
			outputHexNumber = baseConverter::decimalToHexa(outputDecimalNumber);

			printOutput(outputHexNumber);
		}

		return 0;
	}

}

int main()
{
	while (consoleIO::scanAndPrintNumber() != EOF)
	{
		consoleIO::getOutput();
	}

	return 0;
}