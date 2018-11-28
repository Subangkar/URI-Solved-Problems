//https://www.urionlinejudge.com.br/judge/en/problems/view/1
#include <stdio.h>
 
int main() 
{
	
	int givenPassword[1000] ;
    int counter=0 ;

	while(givenPassword[counter-1]!=2002)
	{
		scanf("%d",&givenPassword[counter]) ;
		counter++ ;
	}

	counter=0 ;
	while(counter<=999)
	{
		if(givenPassword[counter]==2002)
		{
			printf("Acesso Permitido\n") ;
			break ;
		}
		else{
		printf("Senha Invalida\n") ;
		counter++ ;
		}
	}

	//printf("\n") ;
    return 0 ;
}
