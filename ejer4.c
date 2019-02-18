#include <stdio.h>
#include <unistd.h>

int main(){
	int pid,z;
	int x = 1;
	if((pid=fork()) == 0){
		for(z =0; z < 8000000; z++){
		 	printf("%d\n", z);
		}
	}
	else{
		//printf("%d\n", getpid());
		while(x < 5){
		}

	}

}
