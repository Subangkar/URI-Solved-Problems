#include <stdio.h>

void main()
{
	int termNo[1000] ;

	int testCase=0 ;

	int result=1 ;

	scanf("%d",&testCase) ;

	int index=0;
	while( index<=testCase-1 && scanf("%d",&termNo[index++]) ) ;

	index=0;
	while( index<=testCase-1)
	{
		if(termNo[index]%2==0) { result=0 ; }
		else				   { result=1 ;}
		printf("%d\n",result) ;
		index++ ;
	}
}