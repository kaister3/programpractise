#include <iostream>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
 int main()
 {
 	int f;
 	const char *f_path = "test.txt";
 	mode_t f_attrib;
 	f_attrib = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

 	f = open(f_path, O_RDONLY);
 	if (f == -1)
 	{
 		f = open(f_path, O_RDWR | O_CREAT, f_attrib);
		if (f != -1)
 		{
 			puts("created a new file!");
 		}else
 		{
 			puts("failed");
 			return 1;
 		}
 	}else
 	{
 		puts("success!");
 	}
 	close(f);
 	return 0;
 }