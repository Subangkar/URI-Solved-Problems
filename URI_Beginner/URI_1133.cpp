//https://www.urionlinejudge.com.br/judge/en/problems/view/1133
#include <stdio.h>
 
int main() 
{
	int X,Y ;

//	int sum=0 ;
	int num=0 ;
    
	scanf("%d %d",&X,&Y) ;

	int startPoint=0 ;
	int endPoint=0 ;

	if(X<Y) { startPoint=X ; endPoint=Y ; }
	else    { startPoint=Y ; endPoint=X ; }

	for(num=startPoint+1 ; num<endPoint ; num++)
	{
		if(num%5==2 || num%5==3) { printf("%d\n",num) ; }
	}

	

    return 0 ;
}
