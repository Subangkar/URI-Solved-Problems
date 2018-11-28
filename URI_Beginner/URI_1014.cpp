#include <stdio.h>
 
int main()
{
	int X=0 ; 
	float Y=0.00 ;

	scanf("%d %f",&X,&Y) ;

	double fuelRate = X/Y ;

	printf("%.3f km/l\n",fuelRate) ;
	
    return 0;
}