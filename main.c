#include "hello.h"
#include "strfun.h"
#include <fops.h>
#include <stdio.h>
#include <stdlib.h> 

int main(){
    
    char* buffer = malloc(sizeof(char) * 256); 

    if(buffer == NULL){
        printf("can't allocate buffer");
        return -1;
    }
    const char* fpath = "./test.txt";

    read_file_to_buffer(buffer, fpath);

    printf("%s\n", buffer);

    free(buffer);

    return 0;
}