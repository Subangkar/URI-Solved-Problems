#include<stdio.h>

#include<math.h>

double pi = 3.14159 ;

int main()
{

	double  A ; 
	double	B ;
	double	C ;

	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);

	double triangleArea , circleArea , trapeziumArea , squareArea , rectangleArea ; 

	triangleArea = .5 * A * C ; // A=base ,C= height

	circleArea = pi * pow(C,2) ; // C=radius Area = pi*R^2

	trapeziumArea = (A+B)/2 * C ; // A,B = parallel sides & C = height

	squareArea = pow(B,2) ;

	rectangleArea = A * B ;

	printf("TRIANGULO: %.3f\n", triangleArea ) ;
	printf("CIRCULO: %.3f\n", circleArea ) ;
	printf("TRAPEZIO: %.3f\n", trapeziumArea ) ;
	printf("QUADRADO: %.3f\n", squareArea ) ;
	printf("RETANGULO: %.3f\n", rectangleArea ) ;


	return 0 ;
}