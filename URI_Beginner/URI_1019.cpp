//https://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include <stdio.h>
 
int main()
{
	int totalTime=0 ; //556
	int hours=0 ;
	int minitues=0 ;
	int seconds=0 ;
	
	scanf("%d",&totalTime) ;

	hours = totalTime / 3600 ;
	seconds = totalTime % 3600 ;
	minitues = seconds / 60 ;
	seconds = seconds % 60 ;

	printf("%d:%d:%d\n",hours,minitues,seconds) ;
	
    return 0;
}