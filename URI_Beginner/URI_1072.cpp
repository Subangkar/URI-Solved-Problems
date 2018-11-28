//https://www.urionlinejudge.com.br/judge/en/problems/view/1072
#include <stdio.h>
 
int main() 
{
	int totalNums=0 ;
    scanf("%d",&totalNums) ;

	int num[10000] ;

	int inCount=0 ;
	int outCount=0 ;

	int count=0 ;
	for(count=0 ; count<=totalNums-1 ; count++)
	{
		scanf("%d",&num[count]) ;
	}

	for(count=0 ; count<=totalNums-1 ; count++)
	{
		if(num[count]<10 || num[count]>20)
		{
			outCount++ ;
		}
	}
	
	inCount = totalNums - outCount ;

	printf("%d in\n",inCount) ;
	printf("%d out\n",outCount) ;

    return 0 ;
}
