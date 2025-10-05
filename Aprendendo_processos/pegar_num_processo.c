#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t meupid = getpid();
	printf("Pid atual do processo: %d\n", meupid);
	
	pid_t pidpai = getppid();
	printf("Pid do pai do processo: %d\n", pidpai);
	return 0;
}