#include<stdio.h>
#include<math.h>

double power(double num, int pow)
{
	if(pow==1) { return num ; }

	double poweredResult = num * power(num,pow-1) ; // 4^3 = 4 * 4^2 ;
	
	return poweredResult ; 
}

int main() // ax^2 + bx + c = 0 && a!=0
{
	double a,b,c ;

	scanf("%lf %lf %lf",&a,&b,&c) ;

	double x1 , x2 ;

	if( ( power(b,2) - 4*a*c ) < 0  || a==0 ) { printf("Impossivel calcular\n") ; }

	else
	{
		x1 = ( -b + sqrt( power(b,2) - 4*a*c ) ) / (2*a) ; 
		x2 = ( -b - sqrt( power(b,2) - 4*a*c ) ) / (2*a) ; 

		printf("R1 = %.5f\n",x1) ;
		printf("R2 = %.5f\n",x2) ;

	}

	return 0 ;
}