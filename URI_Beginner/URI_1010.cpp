//https://www.urionlinejudge.com.br/judge/en/problems/view/1010
#include <stdio.h>
 
int main() 
{
	int code1 , unit1 ;
	float price1 ;
	int code2 , unit2 ;
	float price2 ;

	scanf("%d %d %f",&code1,&unit1,&price1) ;
	scanf("%d %d %f",&code2,&unit2,&price2) ;
 
	double totalPrice = unit1 * price1 + unit2 * price2 ;

	printf("VALOR A PAGAR: R$ %.2f\n",totalPrice) ;

    return 0;
}