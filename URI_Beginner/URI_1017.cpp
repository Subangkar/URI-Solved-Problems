#include <stdio.h>
 
int main()
{
	int time=0 ;
	int velocity=0 ;
	int fuelRate=12 ;
	

	scanf("%d %d",&time,&velocity) ;

	double dist = (time * velocity);

	double fuelSpent =  dist / 12 ; 

	printf("%.3f\n",fuelSpent) ;
	
    return 0;
}