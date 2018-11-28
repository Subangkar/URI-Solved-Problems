//https://www.urionlinejudge.com.br/judge/en/problems/view/1151
#include <stdio.h>
/*
int fibPrintUptoLessThanLastNum(int index )
{
	if(index<=0) { 
					printf("0") ;
					return 1 ; }
//	else if(index==1) { return 1 ; } 
	int minfibNum = fibPrintUptoLessThanLastNum(index-1) ;
	int maxfinNum = fibPrintUptoLessThanLastNum(index-1) + minfibNum ; 
//	int nextFibNum= fibNum ;
	printf(".%d",minfibNum) ;

	return maxfinNum ;
}
*/
int main() 
{
	int totalNumCount=0 ;
	
	scanf("%d",&totalNumCount) ;

	int minFibNum=0 ;
	int maxFibNum=1 ;

//	fibPrintUptoLessThanLastNum(totalNumCount-1 ) ;
	
	int count=0 ;
	for( count=2 ; count<=totalNumCount ; count++ ) // 0 1 1 2 3 5
	{
		printf("%d ",minFibNum) ;
		int temp = maxFibNum ;
		maxFibNum = minFibNum + maxFibNum ;
		minFibNum = temp ;
	}
	printf("%d\n",minFibNum) ;

    return 0;
}