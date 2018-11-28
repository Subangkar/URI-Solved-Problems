//https://www.urionlinejudge.com.br/judge/en/problems/view/1065
#include <stdio.h>
 
int main() 
{
	int numbers[5] ;
	int counter=0 ;
    int totalEvenNums=0 ;

	for(counter=0 ; counter<=4 ; counter++)
	{
		scanf("%d",&numbers[counter]) ;
	}
	for(counter=0 ; counter<=4 ; counter++)
	{
		if(numbers[counter]%2==0){ totalEvenNums++ ;} ;
	}

	printf("%d valores pares",totalEvenNums) ;
	
	printf("\n") ;
    return 0 ;
}