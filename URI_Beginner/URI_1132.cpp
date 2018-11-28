//https://www.urionlinejudge.com.br/judge/en/problems/view/1132
#include <stdio.h>
 
int main() 
{
	int X,Y ;

	int sum=0 ;
	int num=0 ;
    
	scanf("%d %d",&X,&Y) ;

	int startPoint=0 ;
	int endPoint=0 ;

	if(X<Y) { startPoint=X ; endPoint=Y ; }
	else    { startPoint=Y ; endPoint=X ; }

	for(num=startPoint ; num<=endPoint ; num++)
	{
		if(num%13==0) { continue ; }
		sum = sum + num ;
	}

	printf("%d\n",sum) ;

    return 0 ;
}
