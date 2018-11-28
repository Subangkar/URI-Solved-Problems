//https://www.urionlinejudge.com.br/judge/en/problems/view/1096
#include <stdio.h>
 
int main() 
{
	
	int I=1 ;
	int	J=7 ;
    
	for(I=1 ; I<=9 ; I=I+2)
	{
		for(J=7 ; J>=5 ; J--)
		{
			printf("I=%d J=%d\n",I,J) ;
		}
	}

//	printf("\n") ;
    return 0 ;
}