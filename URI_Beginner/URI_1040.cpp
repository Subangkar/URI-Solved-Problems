#include <stdio.h>
 
int main() 
{
	double num1 ,num2 ,num3 ,num4 ;

	scanf("%lf %lf %lf %lf",&num1,&num2,&num3,&num4) ;

	double avg = (2*num1+3*num2+4*num3+1*num4)/(2+3+4+1) ;

		 if(avg>=7.0) { printf("Media: %.1f\nAluno aprovado.\n",avg) ; }

	else if(avg<5.0) { printf("Media: %.1f\nAluno reprovado.\n",avg) ; }

	else
	{
		printf("Media: %.1f\nAluno em exame.\n",avg) ;

		double newScore ;

		scanf("%lf",&newScore) ;

		printf("Nota do exame: %.1f\n",newScore) ;

		double newAvg = (avg+newScore) / 2 ;

		printf("Aluno aprovado.\nMedia final: %.1f\n",newAvg) ;

	}
	
	return 0 ;
}
