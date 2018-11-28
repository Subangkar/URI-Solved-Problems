#include<stdio.h>

#include<stdlib.h>

int main()
{
	int A,B,C ;
	scanf("%d %d %d",&A,&B,&C) ;

	int a,b ;

	int MaxofABC ;

	int MaxofAB = (A+B+abs(A-B))/2 ;

	if(C>MaxofAB)
	{
		MaxofABC = (MaxofAB+C+abs(MaxofAB-C))/2 ;
	}
	else
	{
		MaxofABC = MaxofAB ;
	}

	printf("%d eh o maior\n",MaxofABC);

	return 0 ;
}