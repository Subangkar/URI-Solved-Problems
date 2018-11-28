#include <stdio.h>
 
int main() 
{
	int startTime=0 ;
	int endTime=0 ;

	int bigTime=0 ;
	int smallTime=0 ;

	int durationHours=0 ;

	scanf("%d %d",&startTime,&endTime) ;

	if(startTime<endTime)	{ bigTime = endTime ; 
							  smallTime = startTime ; }

	else					{ bigTime = endTime + 24 ;  // cos 24-Hour Time format
							  smallTime = startTime ; }	

	durationHours = bigTime - smallTime ;

	printf("O JOGO DUROU %d HORA(S)\n",durationHours) ;

	return 0 ;
}