#include <stdio.h>

int main()
{
	int n, i, j, sum =0;

	printf("Enter the value of n of the series of n'th term :");
	scanf("%d", &n);

	for(i=4, j=1; j<=n; i=i+8, j++){
		sum = sum + i;
	}	

	if(n==1){
		printf("The sum of the series 4+12+20+28+.... upto %d'st term = %d\n", n, sum);
	}
	else if(n==2){
		printf("The sum of the series 4+12+20+28+.... upto %d'nd term = %d\n", n, sum);
	}
	else if(n==3){
		printf("The sum of the series 4+12+20+28+.... upto %d'rd term = %d\n", n, sum);
	}
	else{
		printf("The sum of the series 4+12+20+28+.... upto %d'th term = %d\n", n, sum);
	}
	//printf("The sum of the series 4+12+20+28+.... upto %d'th term = %d\n", n, sum);
	
	return 0;
}
