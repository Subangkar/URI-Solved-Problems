//https://www.urionlinejudge.com.br/judge/en/problems/view/1061
#include <stdio.h>
 
int main() 
{
	int startDay=0 ;
	int endDay=0 ;
	int startHour=0 ;
	int startMinitue=0 ;
	int endHour=0 ;
	int endMinitue=0 ;
	int startSecond=0 ;
	int endSecond=0 ;

	int bigDay=0 ;
	int bigHour=0 ;
	int bigMinitue=0 ;
	int bigSecond=0 ;
	int smallDay=0 ;
	int smallHour=0 ;
	int smallMinitue=0 ;
	int smallSecond=0 ;

	int durationDays=0 ;
	int durationHours=0 ;
	int durationMinitues=0 ;
	int durationSeconds=0 ;


	char seperator='a' ; // cos ':' cause termination to int scanning like 'ENTER'
	char dayName[10] ;

	/* Scan Starting Time */
	scanf("%s",&dayName) ;
	scanf("%d %d %c %d %c %d",&startDay,&startHour,&seperator,&startMinitue,&seperator,&startSecond) ;

	/* Scan Ending Time */
	scanf("%s",&dayName) ;
	scanf("%d %d %c %d %c %d",&endDay,&endHour,&seperator,&endMinitue,&seperator,&endSecond) ;

	

	if(startDay<=endDay)			{ bigDay = endDay ; // '<' cos equal Day have 30day diff but not 1month
								  smallDay = startDay ; }

	else						{ bigDay = endDay + 30 ;  // cos 30-Day Time format
								  smallDay = startDay ; }	

	durationDays = bigDay - smallDay ;


	if(startHour<=endHour)		{ bigHour = endHour ; // '<=' cos otherwise equal hour will have 24hr diff but not 1day
								  smallHour = startHour ; }

	else						{ bigHour = endHour + 24 ;  // cos 24-Hour Time format
								  smallHour = startHour ;
								  durationDays = durationDays-1 ;	}	

	durationHours = bigHour - smallHour ;


	if(startMinitue<=endMinitue)	{ bigMinitue = endMinitue ; // '<=' cos otherwise equal minitue will have 60min diff but not 1hr
									  smallMinitue = startMinitue ; }

	else							{ bigMinitue = endMinitue + 60 ;  // cos 60-Minitue = 1hr
									  smallMinitue = startMinitue ; 
									  durationHours = durationHours-1 ;	}	

	durationMinitues = bigMinitue - smallMinitue ;


	if(startSecond<=endSecond)		{ bigSecond = endSecond ; // '<=' cos otherwise equal Second will have 60sec diff but not 1min
									  smallSecond = startSecond ; }

	else							{ bigSecond = endSecond + 60 ;  // cos 60-Second = 1min
									  smallSecond = startSecond ; 
									  durationMinitues = durationMinitues-1 ;	}	

	durationSeconds = bigSecond - smallSecond ;

	/* To ensure that no data catches'-1' & pass '-1' to next bigger Time Format */
	if(durationSeconds==-1) {   durationSeconds=0 ;
								durationMinitues=durationMinitues-1 ; }

	if(durationMinitues==-1) {	durationMinitues=0 ;
								durationHours=durationHours-1 ; }

	if(durationHours==-1) {	durationHours=0 ;
							durationDays=durationDays-1 ; }

	if(durationDays==-1)  {	durationDays=0 ; }




	printf("%d dia(s)\n",durationDays) ;
	printf("%d hora(s)\n",durationHours) ;
	printf("%d minuto(s)\n",durationMinitues) ;
	printf("%d segundo(s)\n",durationSeconds) ;

	return 0 ;
}