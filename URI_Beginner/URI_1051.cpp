//https://www.urionlinejudge.com.br/judge/en/problems/view/1051
#include <stdio.h>

int main() 
{
	float salary ; //4520
	double totalTax ;
	float tax28=0 , tax18=0 , tax08=0 ;

	scanf("%f",&salary) ;

	if(salary<=2000)
	{
		printf("Isento");
	}
	else
	{
		double remainingTaxSalary = salary ;

		if(remainingTaxSalary>4500)
		{
			tax28 = (remainingTaxSalary - 4500 ) ;
			remainingTaxSalary = 4500 ; //remainingTaxSalary - tax28 ;
			//printf("%lf %f\n",remainingTaxSalary,tax28) ;
		}
		if(remainingTaxSalary>3000)
		{
			tax18 = (remainingTaxSalary - 3000 ) ;
			remainingTaxSalary = 3000 ; //remainingTaxSalary - tax18 ;
			//printf("%lf %f\n",remainingTaxSalary,tax18) ;
		}
		if(remainingTaxSalary>2000)
		{
			tax08 = (remainingTaxSalary - 2000 ) ;
			remainingTaxSalary = 2000 ; //remainingTaxSalary - tax08 ;
			//printf("%lf %f\n",remainingTaxSalary,tax08) ;
		}
		
		totalTax = tax28 * 0.28 + tax18 * 0.18 + tax08 * 0.08 ;
		

		printf("R$ %.2f",totalTax) ;
	}

	printf("\n") ;
    return 0 ;
}

/*
#include <stdio.h>
 
int main() 
{
	
	int X,Y ;
    
	scanf("%d %d",&X ,&Y) ;
	
	printf("\n") ;
    return 0 ;
}
*/