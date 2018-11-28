//https://www.urionlinejudge.com.br/judge/en/problems/view/1161
#include <iostream>

long long int factorial(int num) 
{
	if(num==0) { return 1 ; }

	long long int factValue = num * factorial(num-1) ;

	return factValue ;
}

int main() 
{
	int num1=0,num2=0;

	while( std::cin>>num1 ) 
	{
		std::cin>>num2 ;

		long long int  sum = factorial(num1) + factorial(num2) ;

		std::cout<<sum<<std::endl ;
	}

	return 0 ;
}

/*
#include <stdio.h>
#include <iostream>

int main(){
    long long m, n;
    
    long long fat[21];
    fat[0] = 1;
    
    for(int i = 1; i <= 20; i++){
            fat[i] = fat[i-1]*i;
     }
    
    while(std::cin >> m){
                   std::cin >> n;
                 printf("%lld\n", fat[m] + fat[n]);
    }
    
    return 0;
}
*/