#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int fd;
    char * myfifo = "/tmp/myfifo";

    
    mkfifo(myfifo, 0666);


    fd = open(myfifo, O_WRONLY);
    write(fd, "SHTE MINA LI V DVANAYSTI KLAS?", sizeof("SHTE MINA LI V DVANAYSTI KLAS?"));
    close(fd);


    unlink(myfifo);

    return 0;
}
