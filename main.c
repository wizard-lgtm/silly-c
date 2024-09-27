#include "hello.h"
#include "strfun.h"
#include <stdio.h>

int main(){

    char str[] = "Hello";
    reverse_str(str);
    printf("%s\n", str);
    return 0;
}