//https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <stdio.h>
 
int main()
{
	char name[100] ;
	float base,profit ;

	int count=0 ;

	for( count=0; ; count++) // scan name
	{
		scanf("%c",&name[count]);

		if(name[count]=='\n') // stops when Enter is pressed
		{
			break ;
		}
	}

	scanf("%f",&base) ;
	scanf("%f",&profit) ;

	double total = base + profit*0.15 ;

	printf("TOTAL = R$ %.2f\n",total) ;

    return 0;
}