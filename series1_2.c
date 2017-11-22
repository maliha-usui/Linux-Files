#include <stdio.h>

int main()
{
	int n, i, sum=0;

	printf("Enter the number of n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		sum = sum + i;
	}

	if(n==1){
		printf("The sum of the series of 1+2+3+....upto %d'st term = %d\n", n,sum);
	}

	else if(n==2){
		printf("The sum of the series of 1+2+3+....upto %d'nd term = %d\n", n,sum);
	}
	else if(n==3){
		printf("The sum of the series of 1+2+3+....upto %d'rd term = %d\n", n,sum);
	}
	else{
		printf("The sum of the series of 1+2+s3+....upto %d'th term = %d\n", n,sum);
	}
	
	return 0;
}
