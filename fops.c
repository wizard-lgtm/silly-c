#include <stdio.h>
#include <string.h>

// reads all file to buffer 
void read_file_to_buffer(char* buffer, const char* fpath){

    FILE* f = fopen(fpath, "r");
    if(f == NULL){
        perror("File opening Error happened");
        return;
    }

    int len = strlen(buffer);
    int bytes_read = fread(buffer, sizeof(char), len, f);

    buffer[bytes_read] = '\0'; // put null character end of the string 
    
    // Close the file 
    fclose(f);
}