//https://www.urionlinejudge.com.br/judge/en/problems/view/1115
#include <stdio.h>
 
int main() 
{
	int num[1000][2] ;

	int row=0 ;
	int colm=0;
	int lastrow=0 ;


	for(row=0 ;  ; row++ ) // scan values to array
	{
		for( colm=0 ; colm<=1 ; colm++)
		{
			scanf("%d",&num[row][colm]) ;
		}

		if(num[row][0]==0 || num[row][1]==0)
		{ 
			lastrow = row-1 ;
			break ;
		}
	}

	for(row=0 ; row<=lastrow  ; row++ ) // scan values to array
	{
			 if(num[row][0]>0 && num[row][1]>0) // X+ ,Y+
		{ 
			printf("primeiro\n") ;
			continue ;
		}
		else if(num[row][0]<0 && num[row][1]>0) // X- ,Y+
		{ 
			printf("segundo\n") ;
			continue ;
		}
		else if(num[row][0]<0 && num[row][1]<0) // X- ,Y-
		{ 
			printf("terceiro\n") ;
			continue ;
		}
		else if(num[row][0]>0 && num[row][1]<0) // X+ ,Y-
		{ 
			printf("quarto\n") ;
			continue ;
		}
	}

//	printf("\n") ;
    return 0 ;
}
