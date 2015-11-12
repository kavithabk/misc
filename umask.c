#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH)

int main() {
	int fd1, fd2;
	umask(0);
	fd1 = open("file1", O_CREAT | O_RDWR, PERMS);
	umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	fd2 = open("file2", O_CREAT | O_RDWR, PERMS);
	return 0;
}
