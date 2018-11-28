//https://www.urionlinejudge.com.br/judge/en/problems/view/1142
#include <stdio.h>
 
int numPrint(int row)
{
	if(row==0) { return 1 ; } // backs to row1 & row1 start with the value=1

	int rowsStartingValue = numPrint(row-1) ;
	int nextRowsStartingValue = rowsStartingValue + 4 ;
	
	printf("%d %d %d PUM\n",rowsStartingValue,rowsStartingValue+1,rowsStartingValue+2) ;

	return nextRowsStartingValue ;
}


int main() 
{
	
	int totalRow=0 ;
    
	scanf("%d",&totalRow) ;

	numPrint(totalRow) ;
	
//	printf("\n") ;
    return 0 ;
}
