/*
#include <iostream>

int neededCarryCounter(int num1 , int num2) 
{
	int carryBitCount=0 ;

	int digitNum1=0 ;
	int digitNum2=0 ;	
	int carryBit=0 ;

	while( std::abs(num1+num2+carryBit) >= 10 ) // this process continues ultil the num is decreased to 0 bit
	{
		digitNum1 = num1%10 ; // get the last bit value each time
		num1 = num1/10 ;	  // coz next time the next bit can be gained
		digitNum2 = num2%10 ;
		num2 = num2/10 ;
		
		if( std::abs( digitNum1+digitNum2+carryBit ) >= 10) { carryBit=1		; // if sum of 1 bit of each >=10 then '1' is passed to next bit
															  carryBitCount++   ; // & so carryCounter is increased by 1
															  continue			; }

															  carryBit = 0		; // if not then nothing is passed to next bit
	}

	return carryBitCount ;
}

int main()
{
	int num1=0,num2=0 ;

	while( std::cin>>num1 && std::cin>>num2 && ( num1!=0 && num2!=0 ) ) // scan two values to sum from console & stop when both == 0
	{
		int totalCarryNeeded = neededCarryCounter( num1 , num2 ) ;

		std::cout<<totalCarryNeeded<<" Carry Bit is Needed" ;
	}
	return 0 ;
}
*/


// In C >>>>>>>>>>>

#include <iostream>
#include <stdio.h>

int neededCarryCounter(int num1 , int num2) 
{
	int carryBitCount=0 ;

	int digitNum1=0 ;
	int digitNum2=0 ;	
	int carryBit=0 ;

	while( num1!=0 || num2!=0 ) // this process continues ultil the num is decreased to 0 bit
	{
		digitNum1 = num1%10 ; // get the last bit value each time
		num1 = num1/10 ;	  // coz next time the next bit can be gained
		digitNum2 = num2%10 ;
		num2 = num2/10 ;
		
		if( digitNum1+digitNum2+carryBit >= 10) { carryBit=1		; // if sum of 1 bit of each >=10 then '1' is passed to next bit
												  carryBitCount++   ; // & so carryCounter is increased by 1
												  continue			; }

												  carryBit = 0		; // if not then nothing is passed to next bit
	}

	return carryBitCount ;
}

int main()
{
	int num1 = 0, num2 = 0;

	while (scanf("%d %d", &num1, &num2) && (num1 != 0 || num2 != 0)) // scan two values to sum from console & stop when both == 0
	{

		int totalCarryNeeded = neededCarryCounter(num1, num2);

		if (totalCarryNeeded == 0)		{ printf("No carry operation.\n"); }
		else if (totalCarryNeeded == 1) { printf("1 carry operation.\n"); }
		else							{ printf("%d carry operations.\n", totalCarryNeeded); }
	}
	return 0 ;
}
