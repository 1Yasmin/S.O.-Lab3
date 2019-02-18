#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	pid_t pid1,pid2,pid3;
	clock_t var1,var2;
	int i,j,k;

	var1 = clock();

	if((pid1=fork()) == 0){
		//hijo              
		
		if((pid2= fork()) == 0){
			//Nieto
			if((pid3= fork()) == 0){	
				//Bisnieto				
				for(i=0; i< 1000000; i++){
					printf("%d\n", (int)getpid());
				};
			}else{				
				for(k=0; k< 1000000; k++){
					printf("%d\n", (int)getpid());
				};
				wait(NULL);			
			};	
			
		}else{
			
			for(j=0; j< 1000000; j++){
				printf("%d\n", (int)getpid());
			};
			wait(NULL);
		};			
	}else{
		wait(NULL);			
		var2 = clock();	
		double total = (double)var2 - (double)var1;
		printf("%f \n",total);
	};
	
	return(0);

}

