//https://www.urionlinejudge.com.br/judge/en/problems/view/1064
#include <stdio.h>
 
int main() 
{
	float numbers[6] ;
	int counter=0 ;
    int totalPosNums=0 ;
	float sumPosNums=0 ;
	float avg=0 ;

	for(counter=0 ; counter<=5 ; counter++)
	{
		scanf("%f",&numbers[counter]) ;
	}
	for(counter=0 ; counter<=5 ; counter++)
	{
		if(numbers[counter]>0)
		{ 
			totalPosNums++ ;
			sumPosNums = sumPosNums + numbers[counter] ;
		} 
	}

	avg = sumPosNums / totalPosNums ;

	printf("%d valores positivos\n",totalPosNums) ;
	printf("%.1f",avg) ;
	
	printf("\n") ;
    return 0 ;
}