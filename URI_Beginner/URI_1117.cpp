//https://www.urionlinejudge.com.br/judge/en/problems/view/1117
#include <stdio.h>
 
int main() 
{
	
	float num[100] ;

	float sum=0 ;
    
	int index=0 ;
	int validCounter=0 ;
	int indexLength=0 ;

	for(index=0 ; validCounter!=2 ; index++ ) // scan values until two random value entered
	{
		scanf("%f",&num[index]) ;

		if( 0<=num[index] && num[index]<=10 ) // check if the entered value is valid & find out the max index scanning length
		{
			validCounter++ ;
			indexLength=index ;
			sum = sum + num[index] ;
		} 
		
	}

	float avg=sum/2 ;

	int invalidIndexLength=indexLength-2 ; // cos 2 values are valid

	for( index=0 ; index<=invalidIndexLength ; index++)
	{	
		printf("nota invalida\n") ;
	}

	printf("media = %.2f\n",avg) ;

    return 0 ;
}
