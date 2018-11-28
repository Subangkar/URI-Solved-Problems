//https://www.urionlinejudge.com.br/judge/en/problems/view/1144
#include <stdio.h>
 
int main() 
{
	int n = 1 ; // n=Num starts from 1
	int lastNum=0 ;
    
	scanf("%d",&lastNum) ;
	
	for( n=1 ; n<=lastNum ; n++ )
	{
		printf("%d %d %d\n", n , n*n , n*n*n ) ;
		printf("%d %d %d\n", n , n*n+1 , n*n*n+1 ) ;
	}

    return 0 ;
}
