#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	if (fork()==0){
		printf("a");
		execlp("./file1",0);
		printf("b");
	}
	printf("c");
	return 0;
}
