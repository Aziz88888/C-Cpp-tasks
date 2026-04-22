#include <stdio.h>

int swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int c = 3;
    int d = 7;
    printf("c = %d, d = %d\n", c, d);
    swap(&c, &d);
    printf("c = %d, d = %d\n", c, d);
    return 0;
    
}