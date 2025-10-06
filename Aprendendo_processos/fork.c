#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t id_filho;
	
	printf("Processo inicial possui pid: %d\n", getpid());
	id_filho = fork();
	if (id_filho == 0){
		printf("Ola, sou o processo filho de pid: %d! \n", getpid());
	} else {
		printf("Ola, sou o processo pai e criei o filho: %d!\n", id_filho);
		}
		
		return 0;
		
	}	