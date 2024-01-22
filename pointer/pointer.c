#include <stdio.h>
#include <stdlib.h>

int main(){

    int var = 1; //Create a variable to get the address of
    int* point = &var; //Get the address of the variable named i and pass it to the integer pointer named foo

    printf("address of variable i:  %p\n", &var );
    printf("value of variable i:  %d\n", var );

    printf("address of pointer itself:  %p\n", &point );
    printf("address pointer is pointing to:  %p\n", point );
    printf("value pointer is pointing to:  %d\n", *point );
    
    return 0;
}