#include <stdio.h>

int main()
{
	int n, i, j, sum =0, mul =1;

	printf("Enter the value of n of the series of n'th term :");
	scanf("%d", &n);

	for(i=1, j=2; i<=n; i++, j++){
		mul = 1;
		mul = mul*i*j;
		sum = sum + mul;
	}	

	if(n==1){
		printf("The sum of the series 1*2+2*3+3*4+..... upto %d'st term = %d\n", n, sum);
	}
	else if(n==2){
		printf("The sum of the series 1*2+2*3+3*4+..... upto %d'nd term = %d\n", n, sum);
	}
	else if(n==3){
		printf("The sum of the series 1*2+2*3+3*4+..... upto %d'rd term = %d\n", n, sum);
	}
	else{
		printf("The sum of the series 1*2+2*3+3*4+..... upto %d'th term = %d\n", n, sum);
	}
	//printf("The sum of the series 1*2+2*3+3*4+..... upto %d'th term = %d\n", n, sum);
	
	return 0;

}
