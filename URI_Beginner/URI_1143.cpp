//https://www.urionlinejudge.com.br/judge/en/problems/view/1143
#include <stdio.h>
 
int power(int num , int pow) // 4^3 = 4 * 4^2
{
	if(pow==1) { return num ; } // cos 4^1=4 so  (num)^1 = num ;

	int poweredResult = num * power(num,pow-1) ;

	return poweredResult ; 
}

int rowPrint(int row)
{
	if(row==0) { return 0 ; } // returns to row1

	rowPrint(row-1) ;
	
	printf("%d %d %d\n", power(row,1) , power(row,2) , power(row,3) ) ;

	return 0 ;
}

int main() 
{
	int totalRow=0 ;
    
	scanf("%d",&totalRow) ;

	rowPrint(totalRow) ;
	
    return 0 ;
}
