#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int id = fork();
    if (id == -1) {
        printf("failed \n");
    }
    printf("Hello this is fork  \n");
    return 0;
}