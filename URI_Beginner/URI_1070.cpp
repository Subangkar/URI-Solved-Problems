//https://www.urionlinejudge.com.br/judge/en/problems/view/1070
#include <stdio.h>
 
int main()
{
	int X ;
	int minOddNum ;

	scanf("%d",&X) ;

	if(X%2!=0){ minOddNum = X+2; }
	else      { minOddNum = X+1; }

	int oddNum ;
	int count=0 ;
	for( count=1,oddNum=minOddNum ; count<=6 ; count++ , oddNum = oddNum+2 )
	{
		printf("%d\n",oddNum) ;
	}

	
    return 0;
}