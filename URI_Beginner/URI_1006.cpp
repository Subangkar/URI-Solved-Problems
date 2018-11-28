#include <stdio.h>
 
int main()
{
	float A,B,C ;

	scanf("%f",&A) ;
	scanf("%f",&B) ;
	scanf("%f",&C) ;

	double avg = (2*A+3*B+5*C) / (2+3+5) ;

	printf("MEDIA = %.1f\n",avg);

    return 0;
}