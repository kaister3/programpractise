#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	while(a < 100)
	{
		pid_t child;
	int i = 2;
	if((child =fork())==-1){
		printf("fork error\n");
		exit(0);
	}
	if(child == 0){
		i = i + 3;
		printf("i = %d\n",i);
	}
	i = i + 5;
	printf("i = %d\n\n",i);
	a++;
	}
}
