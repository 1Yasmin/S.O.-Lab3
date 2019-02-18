#include <stdio.h>

main(){
	int x, pid;
	for(x=0;x<4;x++){
	pid = fork();
	printf("%d\n",pid);
	}
	return(0);
}
