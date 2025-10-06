#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	char *arg[] = {"ls", "-la", NULL};
	pid_t id_filho = fork();
	if (id_filho != 0){
		printf("Ola, sou o processo pai e criei o filho: %d!\n", id_filho);
	} else {
		execvp("ls", arg); // substitui o processo filho pelo comando ls, se der certo.
		printf("Erro!\n");
		return 1;
	}
	
	return 0;
	
}		