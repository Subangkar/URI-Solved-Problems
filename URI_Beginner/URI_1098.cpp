//https://www.urionlinejudge.com.br/judge/en/problems/view/1098
#include <stdio.h>


 
int main() 
{
	
	double I=0.0 ;
	double J=1.0 ;
    
	double m = 1.0 +0.2;
	if( m <= 1.2)
	{
		printf("---------------------------------------------------------Checking");
	}

	for(I=0.0 ; I<=2.0 ; I=I+0.2)
	{

			for(J=I+1 ; J<=I+3 ; J++)
			{
				printf("I=%.2g J=%.2g\n",I,J) ;
			}
			//printf("The value of I = %.20g\n", I);
		
	}

	
    return 0 ;
}