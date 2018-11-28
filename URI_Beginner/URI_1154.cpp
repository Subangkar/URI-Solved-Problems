#include <iostream>

using namespace std ;

int main() 
{
	int age=0 ;

	int caseCounter=0 ;

	double sumOfAge=0 ;

	double avg= 0 ;


	while( cin>>age && age>0 )
	{
		caseCounter++ ;

		sumOfAge += age ;

		avg = sumOfAge / caseCounter ;
	}

	printf("%.2f\n",avg) ;

	return 0 ;
}