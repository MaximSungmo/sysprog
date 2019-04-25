#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	char* str = "Hello World\n";

	int fd = open("./hello.txt", O_CREAT|O_RDWR);
	write(fd, str, strlen(str));
	close(fd);

	printf("------>%d\n", fd);
	return 0;
}
