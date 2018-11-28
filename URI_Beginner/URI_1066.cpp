//https://www.urionlinejudge.com.br/judge/en/problems/view/1066
#include <stdio.h>
 
int main() 
{
	int num[5] ;
 
	int counter=0 ;

	int evenCount=0 ;
	int oddCount=0 ;
	int posCount=0 ;
	int negCount=0 ;

	for(counter=0 ; counter<=4 ; counter++)
	{
		scanf("%d",&num[counter]) ;
	}

	for(counter=0 ; counter<=4 ; counter++)
	{
		if(num[counter]%2==0) { evenCount++ ; }
		else				  { oddCount++ ; }

		 	 if(num[counter]>0) { posCount++ ; }
		else if(num[counter]<0)	{ negCount++ ; }
	}

	printf("%d valor(es) par(es)\n",evenCount) ;
	printf("%d valor(es) impar(es)\n",oddCount) ;
	printf("%d valor(es) positivo(s)\n",posCount) ;
	printf("%d valor(es) negativo(s)\n",negCount) ;

    return 0 ;
}
