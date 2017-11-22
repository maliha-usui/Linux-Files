#include <stdio.h>
#include <math.h>

int main()
{
	long i, k, n;
	double j, sum=0, mul =1;

	printf("Enter the value of n of the series of n'th term: ");
	scanf("%ld", &n);

	for(i=1, j=1, k=1; k<=n; i=i+1, j=j+2, k++){
		
		sum = sum + (i*j*j);
	}

	if(n==1){
		printf("the sum of the series 1*1^2+2*3^2+3*5^2+...... upto %ld'st term = %.0lf\n", n, sum);
	}
	else if(n==2){
		printf("the sum of the series 1*1^2+2*3^2+3*5^2+......upto %ld'nd term = %.0lf\n", n, sum);
	}
	else if(n==3){
		printf("the sum of the series 1*1^2+2*3^2+3*5^2+...... upto %ld'rd term = %.0lf\n", n, sum);
	}
	else{
		printf("the sum of the series 1*1^2+2*3^2+3*5^2+......upto %ld'th term = %.0lf\n", n, sum);
	}
	
	return 0;
}
