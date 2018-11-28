//https://www.urionlinejudge.com.br/judge/en/problems/view/1113
#include <stdio.h>
 
int main() 
{
	int num[1000][2]  ;
 
	int row = 0 ;
	int colm =0 ;
	for(row=0 ;  ; row++ ) // scan values to array
	{
		for( colm=0 ; colm<=1 ; colm++)
		{
			scanf("%d",&num[row][colm]) ;
		}

		if(num[row][0]==num[row][1]) { break ; } // stops when value of col0=col1
	}

	for(row=0 ;  ; row++ ) // print & switch to next row
	{
		     if(num[row][0]<num[row][1]) { printf("Crescente\n")   ; }
		
		else if(num[row][0]>num[row][1]) { printf("Decrescente\n") ; }
		
		else                             { break				   ; }  // stops when value of col0=col1

	}

	
	//printf("\n") ;
    return 0 ;
}
