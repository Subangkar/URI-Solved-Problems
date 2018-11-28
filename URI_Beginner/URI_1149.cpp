#include <stdio.h>
 
int main() 
{
	int startNum=0;
	int totalNumCounter=0;

	scanf("%d",&startNum) ;

	int sum=0 ;
	int num=startNum ;

	while( scanf("%d",&totalNumCounter) && totalNumCounter==0 ) ; // continue if totalNumCounter=0 is given

	int count=1 ;
	while( count++<=totalNumCounter ) // && sum=sum+num++ ) ;  //
	{
		sum=sum+num++ ;
	}
	printf("%d\n",sum) ;

	return 0 ;
}