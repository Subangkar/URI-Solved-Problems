//https://www.urionlinejudge.com.br/judge/en/problems/view/1020
#include <stdio.h>
 
int main()
{
	int totalTime=0 ; //400
	int years=0 ;
	int months=0 ;
	int days=0 ;
	
	scanf("%d",&totalTime) ;

	years = totalTime / 365 ;
	days = totalTime % 365 ;
	months = days / 30 ;
	days = days % 30 ;

	printf("%d ano(s)\n",years) ;
	printf("%d mes(es)\n",months) ;
	printf("%d dia(s)\n",days) ;

    return 0;
}