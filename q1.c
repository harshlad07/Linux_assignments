#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

	int fd, fd1, size ; 

	char c[50];
	  
	fd = open("read.txt", O_RDONLY | O_CREAT); 
	fd1 = open("write.txt", O_WRONLY);
	
	size = read(fd, c, 20); 
	
	if(write(fd1,c,strlen(c)) == -1)
	{
		printf("Error while writing to file\n");
    	exit(0);	
	}
	else
	{
		printf("wrote %d bytes to the file:\n", strlen(c));
	}
	
return 0;
}
