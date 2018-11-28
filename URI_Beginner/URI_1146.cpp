//https://www.urionlinejudge.com.br/judge/en/problems/view/1146
#include <stdio.h>
 
int main() 
{
	int  num[10000];

	int count = 0 ;
	while( scanf("%d",&num[count]) && num[count++]!=0 ) ;
    
	int lastRowtoPrint = count - 2 ; // cos count-1 == enter && count == blank
	
	for(count = 0 ; count<=lastRowtoPrint ; count++ ) // switch to next line
	{
		int numCount = 1 ;
		while( numCount<num[count] && printf("%d ",numCount++) ) ;
		printf("%d\n",num[count]) ; // print the last Num of Row & pass to next line
	}

    return 0 ;
}
