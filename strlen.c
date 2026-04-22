#include <stdio.h>

int strlen(char* str){
    int len = 0;
    while(str[len] != 0) len++;
    return len;
}


int main(){
    char s[] = "Hello";
    int L = strlen(s);
    printf("%d\n", L);
    return 0;
}