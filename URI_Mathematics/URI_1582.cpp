//https://www.urionlinejudge.com.br/judge/en/problems/view/1582
#include<iostream>

using namespace std ;

class triple
{
	private :

		bool isPythagorian ;

		bool isPrimiray ;

		int GCD(int num1,int num2)
		{
			int largeNum=num1,smallNum=num2 ;

			if(num1<num2) { largeNum=num2 ;
							smallNum=num1 ; }

			int temp = 1;

			while( temp!=0 )
			{
				temp = largeNum % smallNum ;

				largeNum = smallNum ;
				smallNum = temp ;
			}

			int GCDValue = largeNum ;

			return GCDValue ;
		}

		double  powr(double num, int pow)	
		{
				 if (pow==1) { return num ; }
			else if (pow==0) { return 1 ; }

			double powerResult = num * powr(num,pow-1) ;

			return powerResult ;
		}


	public :

		int a ;
		int b ;
		int c ;

	bool Pythagorian()
	{
		isPythagorian = false ;

		if( powr(a,2)==powr(b,2)+powr(c,2) || powr(b,2)==powr(a,2)+powr(c,2) || powr(c,2)==powr(b,2)+powr(a,2) )
		{
			isPythagorian = true ;
		}

		return isPythagorian ;
	}

	bool Primary()
	{
		isPrimiray = false ;

		if( GCD(a , GCD(b,c) ) == 1 )
		{
			isPrimiray=true ;
		}

		return isPrimiray ;
	}
} ;


int main()
{
	triple arm;

	while ( cin>>arm.a>>arm.b>>arm.c )
	{
		bool isPythagorian = arm.Pythagorian() ;

		bool isPrimary = arm.Primary() ;

		if( (isPythagorian && isPrimary)==true )
		{
			cout<<"tripla pitagorica primitiva"<<endl ;
		}
		else if( isPythagorian==true )
		{
			cout<<"tripla pitagorica"<<endl ;
		}
		else
		{
			cout<<"tripla"<<endl ;
		}
	}
	return 0 ;
}