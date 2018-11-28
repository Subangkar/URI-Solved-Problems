//https://www.urionlinejudge.com.br/judge/en/problems/view/1178
#include <stdio.h>
 
int main() 
{
	double N[100] ;
	int counter=0 ;
  
	scanf("%lf",&N[0]) ;
	printf("N[0] = %.4f\n",N[0]) ;

	for(counter=1 ; counter<=99 ; counter++)
	{
		N[counter] = N[counter-1]/2 ;
		printf("N[%d] = %.4f\n",counter,N[counter]) ;
	}

    return 0 ;
}