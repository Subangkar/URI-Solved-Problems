//https://www.urionlinejudge.com.br/judge/en/problems/view/1924
#include <stdio.h>

#define ENTER '\n'

void main()
{
	char chars[200000] ;
	char inputChar='a' ;

	int testCase=0 ;

	int result=1 ;

	scanf("%d",&testCase) ;

	fflush(stdin) ; // so that no extra ENTER comes

	int sentence=1;
	while( sentence<=testCase)
	{
		while ( scanf("%c",&inputChar) && inputChar!=ENTER ) ;
		sentence++ ;
	}
	printf("Ciencia da Computacao\n") ;
}