#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(){
	pid_t filho;
	
	filho = fork();
	if(filho>0){
		sleep(6);
	} else {
		exit(0);
	}
	
	wait(NULL);
	return 0;
	
}		