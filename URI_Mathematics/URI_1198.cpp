#include <stdio.h>

void main()
{
	long long int num1,num2,diff ;

	while ( ( scanf("%lld",&num1) )!=EOF )
	{
		scanf("%lld",&num2) ;

		if(num1>num2) { diff = num1-num2 ; }

		else { diff = num2-num1 ; }

		printf("%lld\n",diff) ;
	}

}