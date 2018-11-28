//https://www.urionlinejudge.com.br/judge/en/problems/view/1035
#include <stdio.h>
 
int main()
{
	int A,B,C,D ;
	
	scanf("%d %d %d %d",&A,&B,&C,&D) ;

	if(A%2==0 && 0<=C && 0<=D && A+B<C+D && B>C && D>A)
	{
		printf("Valores aceitos\n") ;
	}
	else
	{
		printf("Valores nao aceitos\n") ;
	}

	return 0 ;
}