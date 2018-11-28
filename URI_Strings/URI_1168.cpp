/*	DONE IN PYTHON	*/

/*

from ctypes.wintypes import CHAR
#from pip._vendor.distlib.compat import raw_input
from builtins import input

ENTER = '\n'

totalLED = 0

indexLength=0
string = []


def scanString() :
    
    i=0
    while(True):
        
        string[i] = CHAR(input(""))
        
        if(string[i]==ENTER):
            
            break
        
        i += 1
                
    indexLength = i  
    
    return 0  
    
def NeededLED(digit):

    return 
    {    
        '0': 6,
        
        '1': 2,
    
        '2': 5,
        
        '3': 5,
    
        '5': 5,     
    
        '4': 4,
        
        '6': 6,
            
        '7': 3,
        
        '8': 7,
        
        '9': 6
        
    }.get(digit,0)

def calcTotalLed():
    
    for i in range(-1,indexLength): # coz here for Loop (]
        
        totalLED += NeededLED(string[i])
    
    return 0
    
'''    
def f(x):
    return {
        'a': 1,
        'b': 2,
    }.get(x, 9)    
'''  
    
'''    
    if(digit=='0'):return 
 
    if(digit=='1'):return 
        
    if(digit=='2'):return 
    
    if(digit=='3'):return 
    
    if(digit=='4'):return 
    
    if(digit=='5'):return 
    
    if(digit=='6'):return 
    
    if(digit=='7'):return 

    if(digit=='8'):return 
    
    if(digit=='9'):return 
    
'''

testCase = int(input())
#counter = 1

for counter in range(0,testCase):
    
    scanString()
    
    calcTotalLed()
    
    print("%d" %totalLED )

#strng = raw_input("")

#print("%c" %strng[25])
*/

//https://www.urionlinejudge.com.br/judge/en/problems/view/1168

#include <iostream>
#include<limits>

#define ENTER '\n'

using namespace std;

int scanAndCalculateTotalLED()
{
	int totalLED = 0;

	char thisDigit = '0';
	while (cin.get(thisDigit))
	{
		if (thisDigit == ENTER)
		{
			return totalLED;
		}

		switch (thisDigit)
		{
		case '0':
			totalLED += 6;
			break;
		case '1':
			totalLED += 2;
			break;
		case '2':
			totalLED += 5;
			break;
		case '3':
			totalLED += 5;
			break;
		case '4':
			totalLED += 4;
			break;
		case '5':
			totalLED += 5;
			break;
		case '6':
			totalLED += 6;
			break;
		case '7':
			totalLED += 3;
			break;
		case '8':
			totalLED += 7;
			break;
		case '9':
			totalLED += 6;
			break;
		default:
			break;
		}

	}
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // coz extra cin untill enter To flush buffer

	int counter = 1;

	while (counter <= testCase)
	{
		cout << scanAndCalculateTotalLED() << " leds" << endl;

		counter++;
	}

	return 0;
}
