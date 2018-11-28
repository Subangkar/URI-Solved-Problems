//https://www.urionlinejudge.com.br/judge/en/problems/view/1177
#include <stdio.h>
 
int main() 
{
//	int N[1000] ;
	int counter=0 ;
//	int minCounter=0 ;
//	int maxCounter=19 ;
	int maxNum=0 ;
	int num=0 ;

	scanf("%d",&maxNum) ;
	/*
	for(counter=0 ; counter<=19 ; counter++)
	{
		scanf("%d",&N[counter]) ;
	}
	
	for(minCounter=0 , maxCounter=19 ; minCounter<maxCounter ; minCounter++ , maxCounter--)
	{
		int temp = N[minCounter] ;
		N[minCounter] = N[maxCounter] ;
		N[maxCounter] = temp ;
	}
	*/
	for(counter=0 , num=0 ; counter<=999 ; counter++)
	{
		printf("N[%d] = %d\n",counter,num) ;
		if(num==maxNum-1) 
		{ 
			num=0 ; 
			continue ;
		}
		num++ ;
	}

    return 0 ;
}