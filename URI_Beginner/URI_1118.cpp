//https://www.urionlinejudge.com.br/judge/en/problems/view/1118
#include <stdio.h>
 
int main() 
{
	double num[2] ;
	double avg=0 ;

	int option=0 ;
	int index=0 ;

	for(;;)
	{
		option=0 ; // reset each time
		index=0 ; // reset each time
		while(index<=1) // asign th validated values to array & calculate avg
		{
			while( scanf("%lf",&num[index]) && (num[index]<0 || num[index]>10) ) { printf("nota invalida\n") ; }
			index++ ;
		}
		avg = ( num[0] + num[1] )/2 ;
		printf("media = %.2f\n",avg) ;

		while( (option!=1 && option!=2) && printf("novo calculo (1-sim 2-nao)\n") && scanf("%d",&option) ) ;
		index=0 ;

		if(option==1) { continue ; }
		if(option==2) { break ; }
	}

	return 0 ;
}
