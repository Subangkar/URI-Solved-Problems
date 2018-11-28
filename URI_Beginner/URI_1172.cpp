//https://www.urionlinejudge.com.br/judge/en/problems/view/1172
#include <stdio.h>
 
int main() 
{
	int X[10] ;
	int counter=0 ;
  
	for(counter=0 ; counter<=9 ; counter++)
	{
		scanf("%d",&X[counter]) ;
		if(X[counter]<=0) { X[counter] = 1 ; }
	}
	for(counter=0 ; counter<=9 ; counter++)
	{
		printf("X[%d] = %d\n",counter,X[counter]) ;
	}

    return 0 ;
}