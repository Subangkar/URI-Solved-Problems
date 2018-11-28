#include <stdio.h>

int power(int num,int pow)
{
	if(pow == 0) { return 1 ; }

	int poweredValue = num * power(num,pow-1) ;

	return poweredValue ;
}

int main()
{
	double s0=0 ;
	double st=0 ;

	double s=0 ;
	int u=0 ;
	double t=0 ;
	double a=0 ;
	int v=0 ;

	while( scanf("%d",&v)!=EOF )
	{
		scanf("%lf",&t) ; // scan wanted t/2

		if(t==0) {  s = 0 ;
					printf("%d\n",s) ;
					u=v ;
					continue ; }

		a = (v-u)/t ; // a=const so get the 'a' from the first valuable data

		s = u*(2*t) + 0.5 * a * power(2*t,2); 

		u=v ;

		printf("%.0f\n",s) ;
	}

	return 0 ;
}