//https://www.urionlinejudge.com.br/judge/en/problems/view/1060
#include <stdio.h>
 
int main() 
{
	float numbers[6] ;
	int posNumbers= 0 ;
	int index=0 ;

	for( index=0 ; index<=5 ; index++ )
	{
		scanf("%f",&numbers[index]) ;		
	}
	
	for( index=0 ; index<=5 ; index++ )
	{
		if(numbers[index]>=0){ posNumbers++ ;}
	}
	
	printf("%d valores positivos\n",posNumbers) ;

    return 0;
}