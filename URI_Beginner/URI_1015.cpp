#include<stdio.h>
#include<math.h>


double distance(double x1 , double y1 , double x2 , double y2)
{

	double dist = sqrt( pow(x2-x1,2) + pow(y2-y1,2) ) ;

	return dist ;
}

int pointscan()
{
	double x1 , y1 , x2 , y2 ; 

	scanf("%lf %lf",&x1 , &y1 ); //p1
	scanf("%lf %lf",&x2 , &y2 ); //p2

	double dist = distance(x1 , y1 , x2 , y2) ;

	printf("%.4f\n",dist) ;

	return 0 ;
}


int main()
{

	//double check = powr(5.0,2);

	pointscan() ;

	return 0 ;
}