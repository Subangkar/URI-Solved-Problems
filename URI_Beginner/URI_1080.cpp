//https://www.urionlinejudge.com.br/judge/en/problems/view/1080
#include <stdio.h>
 
int main() 
{
	int num[100] ;
	int count = 0 ;
	int max=-999999999;
	int maxPos=0;

	for(count = 0 ; count<=99 ; count++)
	{
		scanf("%d",&num[count]) ;
	}

	for(count = 0 ; count<=99 ; count++)
	{
		if(num[count]>max)
		{
			max = num[count] ;
			maxPos = count+1 ;
		}
	}

	printf("%d\n",max) ;
	printf("%d\n",maxPos) ;

    return 0 ;
}
