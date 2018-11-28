#include <stdio.h>
#include <math.h>
int main() 
{
	double a,b,c ;

	scanf("%lf %lf %lf",&a,&b,&c) ;

	double min=c,max=a ,mid=b ;

	if(a>=b)
	{
			 if(c>=a) { max=c; mid=a; min=b ;}
		else if(b>=c) { max=a; mid=b; min=c ;}
		else if(c>=b) { max=a; mid=c; min=b ;}
	}

	else if(b>=a)
	{
			 if(c>=b) { max=c; mid=b; min=a ;}
		else if(a>=c) { max=b; mid=a; min=c ;}
		else if(c>=a) { max=b; mid=c; min=a ;}
	}

	a=max , b=mid , c=min ;

	if(a+b<=c || b+c<=a || c+a<=b)								  { printf("NAO FORMA TRIANGULO\n") ; }

	else								  
	{ 
		if( pow(a,2) == pow(b,2) + pow(c,2) )					  { printf("TRIANGULO RETANGULO\n") ; }
		if( pow(a,2) > pow(b,2) + pow(c,2) )					  { printf("TRIANGULO OBTUSANGULO\n") ; }
		if( pow(a,2) < pow(b,2) + pow(c,2) )					  { printf("TRIANGULO ACUTANGULO\n") ; }
		if( a==b && b==c )										  { printf("TRIANGULO EQUILATERO\n") ; }
		if( (a==b && b!=c) || (a!=b && b==c) || (a==c && b!=c) )  { printf("TRIANGULO ISOSCELES\n") ; }
	}

    return 0 ;
}