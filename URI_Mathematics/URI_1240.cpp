//https://www.urionlinejudge.com.br/judge/en/problems/view/1240
#include <iostream>

//using namespace std ;

int matcher(long long bigNum,long long smallNum)
{
	int main=0,sub=0 ;

	if(bigNum==smallNum) { return 1 ; }
	else if(bigNum<smallNum) { return -1 ; }

	do
	{
		main = bigNum % 10 ;
		bigNum=bigNum / 10 ;

		sub  = smallNum % 10 ;
		smallNum=smallNum / 10 ;

		if(main!=sub) { return -1 ; }
	}	while(smallNum>0) ; // if after divided the less is 0<=n<=10

	return 1 ;
}

int main()
{
	int testCase=0 ;
	std::cin>>testCase ;

	int bigNum=0 ;
	int smallNum=0 ;

	for(int row=1;row<=testCase;row++)
	{
		std::cin>>bigNum ;
		std::cin>>smallNum ;

		smallNum = matcher(bigNum,smallNum) ;

		if(smallNum==1) { std::cout<<"encaixa\n" ; continue ; }

		std::cout<<"nao encaixa\n" ;
	}

	return 0 ;
}



/*
Old Using Array - NOT ACCEPTED

//https://www.urionlinejudge.com.br/judge/en/problems/view/1240
#include <iostream>

//using namespace std ;

int main()
{
	int testCase=0 ;
	cin>>testCase ;

	int main=0 ;
	int sub=0 ;
	int temp=0 ;
//	bool isSub=true ;

	long long num[2000][2] ;

	for(int row=0;row<=testCase-1;row++)
	{
		for(int colm=0;colm<=1;colm++)
		{
			std::cin>>num[row][colm] ;
		}
	}

	for(int row=0;row<=testCase-1;row++)
	{
		while(sub>=0)
		{
			main = num[row][0]%10 ;
			num[row][0]=num[row][0]/10 ;

			sub  = num[row][1]%10 ;
			num[row][1]=num[row][1]/10 ;

			if(main!=sub) { num[row][0]=-1 ;
							break ; }
		}
	}

	for(int row=0;row<=testCase-1;row++)
	{
		if(num[row][0]!=-1) { std::cout<<"encaixa" ; continue ; }

		std::cout<<"nao encaixa" ;
	}

	return 0 ;
}
*/