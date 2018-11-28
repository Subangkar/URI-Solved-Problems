#include <stdio.h>
 
int main()
{
	float a,b ;

	scanf("%f",&a) ;
	scanf("%f",&b) ;

	double avg = (3.5*a+7.5*b) / (3.5+7.5) ;

	printf("MEDIA = %.5f\n\n",avg);

    return 0;
}