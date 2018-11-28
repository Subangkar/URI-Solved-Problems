
#include <stdio.h>

void main()
{
	int printCase=0;

	scanf("%d",&printCase) ;

	if(printCase!=0)
	{
		int counter=2 ;
		for(counter=2;counter<=printCase;counter++)
		{
			printf("Ho ") ;
		}
		printf("Ho!") ;
	}
	printf("\n") ;
}