#include<stdio.h>

#include<math.h>

double pi = 3.14159 ;

int main()
{
	double R=0;

	scanf("%lf",&R) ;

	double volume ;

	volume = (4.0/3) * pi * pow(R,3) ;

	printf("VOLUME = %.3f\n",volume) ;

	return 0 ;
}