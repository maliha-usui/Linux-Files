#include <stdio.h>

int main()
{
	int n, i, j, k,sum =0, mul =1;

	printf("Enter the value of n of the series of n'th term :");
	scanf("%d", &n);

	for(i=2, j=1, k=1; k<=n; i=i+3, j=j+2, k++){
		mul = 1;
		mul = mul*i*j;
		sum = sum + mul;
	}	

	if(n==1){
		printf("The sum of the series 2*1+5*3+8*5+....... upto %d'st term = %d\n", n, sum);
	}
	else if(n==2){
		printf("The sum of the series 2*1+5*3+8*5+....... upto %d'nd term = %d\n", n, sum);
	}
	else if(n==3){
		printf("The sum of the series 2*1+5*3+8*5+....... upto %d'rd term = %d\n", n, sum);
	}
	else{
		printf("The sum of the series 2*1+5*3+8*5+....... upto %d'th term = %d\n", n, sum);
	}
	//printf("The sum of the series 2*1+5*3+8*5+....... upto %d'th term = %d\n", n, sum);
	
	return 0;

}
