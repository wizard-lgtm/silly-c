
#include <string.h>

void reverse_str(char* str){
    int len = strlen(str);
    for(int i=0; i<len;i++){
        char tmp = str[i];
        int offset = len - 1 - i;
        str[i] = str[offset];
        str[offset] = tmp;
    }
    return;
}