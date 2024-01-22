#include <stdio.h> // printf
#include <stdlib.h> // malloc
#include <string.h> // strtok_r


#define SIZE 50

int main () {
    
    char * buffer;
    int index;
    int total;
    int remain;

    buffer = malloc (SIZE);
    index = 0;
    total = SIZE;
    remain = total - index;
    
    printf("Total size of the buffer is: %d bytes \n", total);
    printf("Current index in the buffer is: %d \n", index);
    printf("The remaining size of the buffer is: %d bytes \n", remain);
    
    char * text = "0123456789abcdef";
    strncpy(buffer, text, SIZE);

    index += strlen(text);
    remain = total - index;
    if (remain < 0){ remain = 0; }
    
    printf("The new index in the buffer is: %d \n", index);
    printf("The new amount of remaining space is: %d bytes \n", remain);

    printf("The text that is going to be copied in to the buffer is: %s \n", text);
    printf("The actual text copied into the buffer given our size constraint is: %s \n", buffer);
    printf("The length of the actual copied text is %ld \n", strlen(buffer));
    
    free (buffer);
    buffer = NULL;
    
    return 0;
}