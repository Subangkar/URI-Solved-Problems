//https://www.urionlinejudge.com.br/judge/en/problems/view/1075
#include <stdio.h>
 
int main() 
{
	
	int N ;
	int dividend=0 ;
	int remainder=2 ;
    
	scanf("%d",&N) ;
	
	for(dividend = 2 ; dividend<10000; dividend=dividend+N)
	{
		printf("%d\n",dividend) ;
	}
    return 0 ;
}
