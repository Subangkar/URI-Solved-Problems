#include <stdio.h>
 
int main() 
{
	double givenNum=0 ;

	scanf("%lf",&givenNum) ;
 
	if(0<=givenNum && givenNum<=25)		  { printf("Intervalo [0,25]\n") ; }

	else if(25<givenNum && givenNum<=50)  { printf("Intervalo (25,50]\n")  ; }

	else if(50<givenNum && givenNum<=75)  { printf("Intervalo (50,75]\n") ; }

	else if(75<givenNum && givenNum<=100) { printf("Intervalo (75,100]\n") ; }

	else								  { printf("Fora de intervalo\n") ; }

    return 0 ;
}