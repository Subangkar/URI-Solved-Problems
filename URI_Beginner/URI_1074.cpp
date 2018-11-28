#include <stdio.h>
 
int main() 
{
	int testCase=0 ;
	int count = 0 ;
	int num[10000] ;

	scanf("%d",&testCase) ;
	for( count = 0 ; count<=testCase-1 ; count++ )
	{
		scanf("%d",&num[count]) ;
	}

	for( count = 0 ; count<=testCase-1 ; count++ )
	{
			 if(num[count]==0) { printf("NULL\n") ; }
		else if(num[count]<0 && num[count]%2!=0 ) { printf("ODD NEGATIVE\n") ; }
		else if(num[count]<0 && num[count]%2==0 ) { printf("EVEN NEGATIVE\n") ; }
		else if(num[count]>0 && num[count]%2!=0 ) { printf("ODD POSITIVE\n") ; }
		else if(num[count]>0 && num[count]%2==0 ) { printf("EVEN POSITIVE\n") ; }
	}

	return 0 ;
}