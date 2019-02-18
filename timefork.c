#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
	
	pid_t pid;
	clock_t var1,var2;
	
	var1 = clock();

	if((pid=fork()) == 0){
	}
	else{
	var2 = clock();	
	double total = (double)var2 - (double)var1;
	total = total/ CLOCKS_PER_SEC;
	printf("%f \n",total);
	}

	
	return(0);

}
