//https://www.urionlinejudge.com.br/judge/en/problems/view/1078
#include <stdio.h>
 
int main() 
{
	
	int N ;
    int multiplier=1 ;
	int multipliedValue=0 ;

	scanf("%d",&N) ;
	
	for(multiplier=1 , multipliedValue=N ; multiplier<=10 ; multiplier++ , multipliedValue=multipliedValue+N )
	{
		printf("%d x %d = %d\n",multiplier,N,multipliedValue) ;
	}


    return 0 ;
}
