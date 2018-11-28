//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
#include <stdio.h> 

/*
int valueAssigner()
{

	return 0 ;
}

int valuePrinter()
{

	return 0 ;
}


int sequencePrint()
{
	
	int n=1 ; // n=Num starts from 1
	int num[12500][19];
	//int p[100000] ;

	int lastNum=0 ;
	int maxColm=0 ;
	int lastColm=0 ;

	int row=0 ;
	int colm=0 ;
    
	scanf("%d %d",&maxColm,&lastNum) ;
	
	for( row=0 ;  ; row++ ) // switch to next row
	{
		for( colm=0 ; colm<=(maxColm-1) ; colm++ , n++ ) // asign num in a row to array
		{	
			num[row][colm] =  n ;
		}

		for( colm=0 ; colm<=(maxColm-1) - 1 ; colm++) // prints num in a row except the last colm // ( ; <=1 || 0,1 ; )
		{	
			if(num[row][colm]==lastNum) // stops when last Number comes
			{
				printf("%d\n",num[row][colm]) ; //prints the last  num in lsat row & go to next line
				return 0 ;
			}
			printf("%d ", num[row][colm] ) ;
		}
		
		printf("%d\n",num[row][colm]) ; //prints the last colm num in a row & switch to next row
	}


	return 0 ;


}
*/


int NumPrintforFullRowAndColm(int row , int colm) // for 6,2> 3 2
{
	if(row==0) { return 1 ; }// return to row 1 otherwise row1 returns to row2 but print row1

//	row = NumPrintRowAndColm(row-1,colm) ;
//	int rowsLastColmValue = row * colm ;
//	int rowsStartColmValue = (row-1) * colm + 1 ;

	int	rowsStartColmValue = NumPrintforFullRowAndColm(row-1,colm) ; // prepares this row's starting value
	int rowsLastColmValue = rowsStartColmValue-1 + colm ;// prepares this row's last value
	int nextRowsStartColmValue = rowsLastColmValue+1 ; // prepares next row's starting value

	int numPrinter ;
	for( numPrinter=rowsStartColmValue ; numPrinter<rowsLastColmValue ; numPrinter++) // '<' cos prints nums-1 in each row & to print the last one seperately
	{
		printf("%d ",numPrinter) ;
	}
	printf("%d\n",rowsLastColmValue) ; // prints the last value of a row seperately

	return nextRowsStartColmValue ;
//	return row++ ;

	/*
	1 2 3 4
	5 6 7 8
	9 10 11 12
	*/
}

int NumPrintCallerAndBrokenRowPrinter()
{
	int lastNum=0 ;
	int numPerColm=0 ;

//	printf("Enter the last Num :") ;
	scanf("%d %d",&numPerColm,&lastNum);

	
//	printf("Ente Nums Per Colm :") ;
	
//	printf("\n");

	int row = (lastNum/numPerColm) ;

	int remaingNumStart = row * numPerColm +1 ;
	int remaingNumEnd   = lastNum ;

	NumPrintforFullRowAndColm( row , numPerColm ) ;

	if(remaingNumStart<=lastNum)
	{
		int numPrinter ;
		for( numPrinter=remaingNumStart ; numPrinter<remaingNumEnd ; numPrinter++ ) // '<' cos prints nums-1 in broken row & to print the last one seperately
		{
			printf("%d ",numPrinter) ;		
		}
		printf("%d\n",remaingNumEnd) ; // prints the last value of broken row seperately
	}

	return 0 ;
}

int main() 
{
	NumPrintCallerAndBrokenRowPrinter() ;

	return 0 ;
}
