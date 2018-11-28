//https://www.urionlinejudge.com.br/judge/en/problems/view/1173
#include <stdio.h>
 
int main() 
{
	int N[10] ;
	int counter=0 ;
  
	scanf("%d",&N[0]) ;
	printf("N[0] = %d\n",N[0]) ;

	for(counter=1 ; counter<=9 ; counter++)
	{
		N[counter] = 2*N[counter-1] ;
		printf("N[%d] = %d\n",counter,N[counter]) ;
	}

    return 0 ;
}