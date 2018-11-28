#include <stdio.h>

double average(int num[] ,int testCase)
{
	double sum=0 ;

	int index=1 ;
	while(index<=testCase) // makes the sum of datas
	{
		sum = sum + num[index] ;
		index++ ;
	}

	double avg=sum/testCase ;

	return avg ;
}

int main()
{
	int testCase=0 ;
	scanf("%d",&testCase) ;

	int num[1001] ;

	int row=1 ;
	double rowTestCase=0;
	
	for(row=1 ; row<=testCase ; row++)
	{
		scanf("%lf",&rowTestCase) ;

		int index=1 ;
		while( scanf("%d",&num[index++]) && index<=rowTestCase ) ;

		double avg = average(num,rowTestCase) ;

		double overAvgCount=0;
		for(index=1 ; index<=rowTestCase ; index++) // to get how many num are more than avg
		{
			if(num[index]>avg) { overAvgCount++ ; }
		}

		double overAvgRatio = (overAvgCount*100/rowTestCase) ;

		printf("%.3f%c\n",overAvgRatio,'%') ;
	}

	return 0 ;
}
