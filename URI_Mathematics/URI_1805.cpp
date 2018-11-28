//https://www.urionlinejudge.com.br/judge/en/problems/view/1805

#include <iostream>


int main()
{
	double start=1 , end=1000000000 ;

	std::cin>>start>>end ;

	unsigned long long sum = ( end *  (end+1) ) / 2  ;

	int num = start-1 ; // cos start is in the sum

	while(num>=1)
		sum -= num-- ;


	std::cout<<sum<<std::endl ;

	return  0 ;
}