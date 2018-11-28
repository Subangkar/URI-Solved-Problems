#include<stdio.h>

double power(double num, int pow)
{
	if(pow==1) { return num ; }

	double poweredResult = num * power(num,pow-1) ; // 4^3 = 4 * 4^2 ;
	
	return poweredResult ; 
}

int squarePrint(int num)
{
	if(num==0) { return 2 ;}
	
	int evenNum = squarePrint(num-2) ;

	printf("%d^2 = %.7g\n", evenNum , power(evenNum,2) ) ;

	return evenNum+2 ;
}
int main()
{
	int lastEvenNum ;

	scanf("%d",&lastEvenNum) ;

	squarePrint(lastEvenNum) ;

	return 0 ;
}