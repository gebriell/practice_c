#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf ("This is curl.\n");
    printf ("The PID is %d.\n", getpid());
    execl("/usr/bin/curl", "/usr/bin/curl", "google.com", NULL);
    return 0;
}