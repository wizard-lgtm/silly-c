#include <stdio.h>
#include <string.h>

#ifndef FOPS_H



#define FOPS_H 

// Reads all file content to buffer
void read_file_to_buffer(char* buffer,const char* file_path);

// List dir entries to a list
const char* list_dir(const char* dir_path);

#endif