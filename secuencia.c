#include <stdio.h>
#include <unistd.h>

main(){
	int pid = fork();
	printf("%d\n",(int)pid);
	int pid2 = fork();
	printf("%d\n",(int)pid2);
	int pid3 = fork();
	printf("%d\n",(int)pid3);
	int pid4 = fork();
	printf("%d\n",(int)pid4);
	return(0);
}
