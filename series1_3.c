#include <stdio.h>

int main()
{
	int n, i, j, sum=0;

	printf("Enter the value of the series n: ");
	scanf("%d", &n);

	for(i=1, j=1; j<=n; i=i+2,j++){
		sum = sum +i;
	}

	if(n==1){
		printf("The sum of the series of 1+3+5+....upto %d'st term = %d\n", n,sum);
	}


	else if(n==2){
		printf("The sum of the series of 1+3+5+....upto %d'nd term = %d\n", n,sum);
	}
	else if(n==3){
		printf("The sum of the series of 1+3+5+....upto %d'rd term = %d\n", n,sum);
	}
	else{
		printf("The sum of the series of 1+3+5+....upto %d'th term = %d\n", n,sum);
	}
	//printf("The sum of the series of 1+3+5+....upto %d'th term = %d\n", n,sum);
	
	return 0;
}
