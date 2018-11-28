//https://www.urionlinejudge.com.br/judge/en/problems/view/1157
#include <stdio.h>
 
int main() 
{
	int num=0 ;
	int divisor=1 ;

	scanf("%d",&num) ;

	for(divisor=1 ; divisor<=num ; divisor++)
	{
		if(num%divisor==0) { printf("%d\n",divisor) ; }
	}

	return 0 ;
}