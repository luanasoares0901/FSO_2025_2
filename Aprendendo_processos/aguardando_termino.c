#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
	pid_t id_filho;
	int status;
	
	printf("Processo inicial possui pid: %d\n",getpid());
	id_filho = fork();
	if(id_filho == 0){
		printf("Ola, sou o processo filho de pid: %d!\n",getpid());
		exit(0);
	}
	
	wait(NULL);
	printf("Ola, sou o processo pai e o filho terminou!\n");	
	return 0;
}	