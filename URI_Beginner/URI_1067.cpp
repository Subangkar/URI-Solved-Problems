#include <stdio.h>
 
int main()
{
	int X ;

	scanf("%d",&X) ;
	int oddNum ;
	for( oddNum=1 ; oddNum<=X ; oddNum = oddNum+2 )
	{
		printf("%d\n",oddNum) ;
	}

	
    return 0;
}