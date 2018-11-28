//https://www.urionlinejudge.com.br/judge/en/problems/view/1071
#include <stdio.h>
 
int main() 
{
	
	int X,Y ; // from Y to X but min!=Y
	int minOddNum ;
	int sum=0 ;

    int oddNum = 0 ;

	scanf("%d %d",&Y ,&X) ;
	
	int div = X % 2 ;

	if(div==0) { minOddNum = X+1  ; }
	else       { minOddNum = X+2  ; } 

	for(oddNum = minOddNum ; oddNum<Y ; oddNum = oddNum + 2 )
	{
		sum = sum + oddNum ;
	}

	printf("%d",sum) ;

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