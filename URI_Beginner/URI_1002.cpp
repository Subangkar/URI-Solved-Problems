#include<stdio.h>

#include<math.h>

/*
double pow(double num,int power)
{
	double mult = 1.0000 ;

	for(int count=1 ; count<=power ; count++ )
	{
		mult = mult * num ;
	}

	return mult ;
}
*/
int main()
{
	double pi = 3.14159 ;

	double R = 0 ;

	double A = 0 ;

	scanf("%lf",&R) ;

	A = pi * pow(R,2) ;

	printf("A=%.4f",A) ;
	printf("\n") ;

	return 0 ;
}