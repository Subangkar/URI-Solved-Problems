#include<stdio.h>

int main() // 576
{
	int amount = 0 ;
	
	scanf("%d",&amount) ;

	int remainingAmount = amount ;
	
	int note100 = 100 ;
	int note50 = 50 ;
	int note20 = 20 ;
	int note10 = 10 ;
	int note5 = 5 ;
	int note2 = 2 ;
	int note1 = 1 ;

	int note100Count = 0 ;
	int note50Count = 0 ;
	int note20Count = 0 ;
	int note10Count = 0 ;
	int note5Count = 0 ;
	int note2Count = 0 ;
	int note1Count = 0 ;

	if( remainingAmount>=100 )
	{
		note100Count=remainingAmount/100 ;
		remainingAmount = remainingAmount - note100Count * note100 ;
	}
	if( remainingAmount>=50 )
	{
		note50Count=remainingAmount/50 ;
		remainingAmount = remainingAmount - note50Count * note50 ;
	}
	if( remainingAmount>=20 )
	{
		note20Count=remainingAmount/20 ;
		remainingAmount = remainingAmount - note20Count * note20 ;
	}
	if( remainingAmount>=10 )
	{
		note10Count=remainingAmount/10 ;
		remainingAmount = remainingAmount - note10Count * note10 ;
	}
	if( remainingAmount>=05 )
	{
		note5Count=remainingAmount/05 ;
		remainingAmount = remainingAmount - note5Count * note5 ;
	}
	if( remainingAmount>=02 )
	{
		note2Count=remainingAmount/02 ;
		remainingAmount = remainingAmount - note2Count * note2 ;
	}
	if( remainingAmount>=01 )
	{
		note1Count=remainingAmount/01 ;
		remainingAmount = remainingAmount - note1Count * note1 ;
	}


	printf("%d\n",amount) ;

	printf("%d nota(s) de R$ 100,00\n",note100Count) ;
	printf("%d nota(s) de R$ 50,00\n",note50Count) ;
	printf("%d nota(s) de R$ 20,00\n",note20Count) ;
	printf("%d nota(s) de R$ 10,00\n",note10Count) ;
	printf("%d nota(s) de R$ 5,00\n",note5Count) ;
	printf("%d nota(s) de R$ 2,00\n",note2Count) ;
	printf("%d nota(s) de R$ 1,00\n",note1Count) ;

	return 0 ;
}