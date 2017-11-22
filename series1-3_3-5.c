#include <stdio.h>

int main()
{
	int i, j, k, n, sum=0, mul=1;

	printf("Enter the value of n of the series of n'th term: ");
	scanf("%d", &n);

	for(i=1, j=3, k=1; k<=n; i=i+2, j=j+2, k++){
		sum = sum + (i*j);
	}

	if(n==1){
		printf("the sum of the series 1*3+3*5+5*7+...... upto %d'st term = %d\n", n, sum);
	}
	else if(n==2){
		printf("the sum of the series 1*3+3*5+5*7+...... upto %d'nd term = %d\n", n, sum);
	}
	else if(n==3){
		printf("the sum of the series 1*3+3*5+5*7+...... upto %d'rd term = %d\n", n, sum);
	}
	else{
		printf("the sum of the series 1*3+3*5+5*7+...... upto %d'th term = %d\n", n, sum);
	}
	//printf("the sum of the series 1*3+3*5+5*7+...... upto %d'th term = %d", n, sum);
	
	return 0;
}
