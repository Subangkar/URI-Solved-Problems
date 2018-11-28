#include<stdio.h>

int main() // 576.73
{
	double amount = 0 ;
	
	scanf("%lf",&amount) ;

	double remainingAmount = amount ;
	
	int note100 = 100 ;
	int note50 = 50 ;
	int note20 = 20 ;
	int note10 = 10 ;
	int note5 = 5 ;
	int note2 = 2 ;
	int note1 = 1 ;
	
	double note050= 0.50000000000000000000000000000 ;
	double note025= 0.25000000000000000000000000000 ;
	double note010= 0.10000000000000000000000000000 ;
	double note005= 0.05000000000000000000000000000 ;
	double note001= 0.01000000000000000000000000000 ;


	int note100Count = 0 ;
	int note50Count = 0 ;
	int note20Count = 0 ;
	int note10Count = 0 ;
	int note5Count = 0 ;
	int note2Count = 0 ;
	int note1Count = 0 ;

	int note050Count = 0 ;
	int	note025Count = 0 ;
	int	note010Count = 0 ;
	int	note005Count = 0 ;
	int note001Count = 0 ;

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


	if( remainingAmount>=0.50 )
	{
		note050Count=remainingAmount/0.50 ;
		remainingAmount = remainingAmount - note050Count * note050 ;
	}
	if( remainingAmount>=0.25 )
	{
		note025Count=remainingAmount/0.25 ;
		remainingAmount = remainingAmount - note025Count * note025 ;
	}
	if( remainingAmount>=0.100000000000000000000000000000000000000 )
	{
		note010Count=remainingAmount/0.10000000000000000000000000000 ;
		remainingAmount = remainingAmount - note010Count * note010 ;
	}
	if( remainingAmount>=0.050000000000000000000000000000000000000 )
	{
		note005Count=remainingAmount/0.05000000000000000000000000000 ;
		remainingAmount = remainingAmount - note005Count * note005 ;
	}
	if( remainingAmount>=0.010000000000000000000000000000000000000 )
	{
		note001Count=remainingAmount/0.01000000000000000000000000000 ;
		remainingAmount = remainingAmount - note001Count * note001 ;
	}


	printf("NOTAS:\n") ;

	printf("%d nota(s) de R$ 100.00\n",note100Count) ;
	printf("%d nota(s) de R$ 50.00\n",note50Count) ;
	printf("%d nota(s) de R$ 20.00\n",note20Count) ;
	printf("%d nota(s) de R$ 10.00\n",note10Count) ;
	printf("%d nota(s) de R$ 5.00\n",note5Count) ;
	printf("%d nota(s) de R$ 2.00\n",note2Count) ;


	printf("MOEDAS:\n") ;

	printf("%d moeda(s) de R$ 1.00\n",note1Count) ;
	printf("%d moeda(s) de R$ 0.50\n",note050Count) ;
	printf("%d moeda(s) de R$ 0.25\n",note025Count) ;
	printf("%d moeda(s) de R$ 0.10\n",note010Count) ;
	printf("%d moeda(s) de R$ 0.05\n",note005Count) ;
	printf("%d moeda(s) de R$ 0.01\n",note001Count) ;


	return 0 ;
}