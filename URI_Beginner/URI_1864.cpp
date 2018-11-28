#include <stdio.h>

void main()
{
	char line[100]="LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED." ;

	int charsToPrint=0 ;

	scanf("%d",&charsToPrint) ;

	int index=0;
	while( index<=charsToPrint-1 && printf("%c",line[index++]) ) ;
	printf("\n") ;
}