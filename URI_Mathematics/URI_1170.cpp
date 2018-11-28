#include <stdio.h>
#include <math.h>


void main()
{
	int testCase=0 ;
	scanf("%d",&testCase) ;

	int cases=1 ;

	while(cases <= testCase)
	{
		double totalFoodAmount=0 ;

		scanf("%lf",&totalFoodAmount) ;

		int neededDays = ceil ( log10(totalFoodAmount)/log10(2.0) ) ; // ceil is for roundiong up float to next int like 1.00001>2 & 1.0000>1

		printf("%d dias\n",neededDays) ;

		cases++ ;
	} 

}



/*
#include <stdio.h>

int main(){
    int n, dias;
    float x;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
            scanf("%f", &x);
            dias = 0;
            while(x > 1){
                    x /= 2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }
    
    return 0;
}
*/