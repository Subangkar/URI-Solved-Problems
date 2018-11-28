//https://www.urionlinejudge.com.br/judge/en/problems/view/1176

#include <stdio.h>

long long fib[61] ;

long long fibArrayProducer(long long fibIndex)
{
	if(fibIndex==1)
	{
		fib[0] = 0 ;
		fib[1] = 1 ;
		return fib[0] + fib[1] ;
	}

	fib[fibIndex]=fibArrayProducer(fibIndex-1) ;

	return fib[fibIndex]+fib[fibIndex-1] ;
}

void main()
{
	fibArrayProducer(60) ;

	int testCase=0 ;
	int fibIndex[61] ;
	int index=0;

	scanf("%d",&testCase) ;


	for(index=0 ; index<=testCase-1 ; index++)
	{
		scanf("%d",&fibIndex[index]) ;
		printf("Fib(%d) = %lld\n",fibIndex[index],fib[ fibIndex[index] ]) ;
	}

}



/*
void main() 
{
	int testCase=0 ;
	long long fibArray[61] ;

	int fibIndex[61] ;
    
//    scanf("%d",&testCase) ;
	
	int count = 0 ;
	for(count = 0 ; count<=testCase-1 ; count++)
	{
		scanf("%d",&fibIndex[count]) ;
	}
	
    long long minFibNum=0 ;
    long long maxFibNum=1 ;
      
    int index=0 ;
    for( index=0 ; index<=60 ; index++ ) // prepares a fib array
    {
		fibArray[index] = minFibNum ;
        long long temp = maxFibNum ;
        maxFibNum = minFibNum + maxFibNum ;
        minFibNum = temp ;
    }

	scanf("%d",&testCase) ;

	int count = 0 ;
	for(count = 0 ; count<=testCase-1 ;)
	{
		scanf("%d",&fibIndex[count]) ;
		printf("Fib(%d) = %u\n",fibIndex[count],fibArray[fibIndex[count]]) ;
		count++ ;
	}

	/*
	count = 0 ;
	for( count = 0 ; count<=testCase-1 ; count++)
	{
		printf("Fib(%d) = %u\n",fibIndex[count],fibArray[fibIndex[count]]) ;
	}
	

}
*/


/*

#include <iostream>

int main(){
    int n, f;
    long long fib[61];
    std::cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int j = 2; j <= 60; j++){
            fib[j] = fib[j-2] + fib[j-1];
    }
    
    for(int i = 0; i < n; i++){
            std::cin >> f;
            std::cout << "Fib(" << f << ") = " << fib[f] << "\n";
    }
    return 0;
} */ 