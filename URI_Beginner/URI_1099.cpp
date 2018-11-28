//https://www.urionlinejudge.com.br/judge/en/problems/view/1099
#include <stdio.h>
 
int main() 
{
	int totalRows=0 ;
	int num[1000][2] ;

	int row=0 ;
	int colm=0;

	int startColm=0 ;
	int endColm=1 ;

	int minOddNum=0;
	int oddNum=0;
	int oddSuminaRow=0 ;
    
	scanf("%d",&totalRows) ;

	for(row=0 ; row<=totalRows-1 ; row++ ) // scan values to array
	{
		for( colm=0 ; colm<=1 ; colm++)
		{
			scanf("%d",&num[row][colm]) ;
		}
	}


	for(row=0 ; row<=totalRows-1 ; row++ ) // switch to next row
	{
		if(num[row][0]<num[row][1]) { startColm = 0 ;  // find out the start & end point in a Row
									  endColm   = 1	; }
		else                        { startColm = 1 ; 
									  endColm   = 0	; }

		if(num[row][startColm]%2==0) { minOddNum = num[row][startColm] + 1 ;} // gives starting ODD Num
		else                         { minOddNum = num[row][startColm] + 2 ;}
		
		for( oddNum = minOddNum ; oddNum < num[row][endColm] ; oddNum = oddNum + 2 )  // do sum in a row
		{
			oddSuminaRow = oddSuminaRow + oddNum ;
		}

		printf("%d\n",oddSuminaRow) ; // print Sum each time
		oddSuminaRow = 0 ; // reset Sum each time to 0
	}
	
	//printf("\n") ;
    return 0 ;
}
