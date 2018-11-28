//https://www.urionlinejudge.com.br/judge/en/problems/view/1047
#include <stdio.h>
 
int main() 
{
	int startHour=0 ;
	int startMinitue=0 ;
	int endHour=0 ;
	int endMinitue=0 ;

	int bigHour=0 ;
	int bigMinitue=0 ;
	int smallHour=0 ;
	int smallMinitue=0 ;

	int durationHours=0 ;
	int durationMinitues=0 ;

	scanf("%d %d %d %d",&startHour,&startMinitue,&endHour,&endMinitue) ;

	if(startHour<endHour)		{ bigHour = endHour ; // '<' cos equal hour have 24hr diff but not 1day
								  smallHour = startHour ; }

	else						{ bigHour = endHour + 24 ;  // cos 24-Hour Time format
								  smallHour = startHour ; }	

	durationHours = bigHour - smallHour ;


	if(startMinitue<=endMinitue)	{ bigMinitue = endMinitue ; // '<=' cos otherwise equal minitue will have 60min diff but not 1hr
									  smallMinitue = startMinitue ; }

	else							{ bigMinitue = endMinitue + 60 ;  // cos 60-Minitue = 1hr
									  smallMinitue = startMinitue ; 
									  durationHours = durationHours-1 ;	}	

	durationMinitues = bigMinitue - smallMinitue ;


	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durationHours,durationMinitues) ;

	return 0 ;
}