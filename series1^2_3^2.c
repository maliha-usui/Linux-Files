#include <stdio.h>

int main()
{
	int i, j, k, n, sum=0;

	printf("Enter the value of n of the series of n'th term: ");
	scanf("%d", &n);

	for(i=1, k=1; k<=n; i=i+2, k++){
		sum = sum + (i*i);
	}

	if(n==1){
		printf("the sum of the series 1^2+3^2+5^2+...... upto %d'st term = %d\n", n, sum);
	}
	else if(n==2){
		printf("the sum of the series 1^2+3^2+5^2+...... upto %d'nd term = %d\n", n, sum);
	}
	else if(n==3){
		printf("the sum of the series 1^2+3^2+5^2+...... upto %d'rd term = %d\n", n, sum);
	}
	else{
		printf("the sum of the series 1^2+3^2+5^2+...... upto %d'th term = %d\n", n, sum);
	}
	
	return 0;
}
