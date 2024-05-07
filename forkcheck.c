#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void){ pid_t pid; 
pid=fork(); 
if(pid == 0) {
       	printf("Iam child my pid is %d\n",getpid()); 
 	printf("My parent pid is:%d\n",getppid()); 
	exit(0);
} else if(pid >0){ 
	printf("I am parent, my pid is %d\n",getpid());
       	printf("My child PID is %d \n ",pid);
	exit(0);
} 
}

