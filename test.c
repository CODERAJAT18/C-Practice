#include <fcntl.h>
#include <stdio.h>
 
int main()
{
    const char* pathname = "example.txt";
    int flags = O_RDONLY;
    mode_t mode = 0644;
 
    int fd = open(pathname, flags, mode);
  // in function call open(), we passed the parameters pathanme,flags,mode to the kernal directly
 
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
 
    // File operations here...
 
    close(fd);
    return 0;
}