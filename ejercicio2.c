#include <stdio.h>
#include <time.h>

int main(){

	clock_t var1,var2;

	var1 = clock();

	int i,j,k;

	for(i=0; i< 1000000; i++){
		printf("%d\n", (int)getpid());
	};

	for(j=0; j< 1000000; j++){
		printf("%d\n", (int)getpid());
	};	

	for(k=0; k< 1000000; k++){
		printf("%d\n", (int)getpid());
	};

	var2 = clock();
	double total = (double)var2 - (double)var1;
	printf("%f \n",total);
	return(0);
}

