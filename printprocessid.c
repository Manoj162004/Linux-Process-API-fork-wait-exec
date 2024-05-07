#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(void){
	pid_t process_id;
	pid_t p_process_id;
	process_id = getpid();
	p_process_id = getppid();
	printf("The process ID is %d\n",process_id);
	printf("The parent process ID is %d",p_process_id);
}	
