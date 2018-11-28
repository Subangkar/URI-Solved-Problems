//https://www.urionlinejudge.com.br/judge/en/problems/view/1174
#include <stdio.h>
 
int main() 
{
	float A[100] ;
	int counter=0 ;
  

	for(counter=0 ; counter<=99 ; counter++)
	{
		scanf("%f",&A[counter]) ;
	}
	for(counter=0 ; counter<=99 ; counter++)
	{
		if( A[counter]<=10 )
		{
			printf("A[%d] = %.1f\n",counter,A[counter]) ;
		}
	}

    return 0 ;
}