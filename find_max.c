#include <stdio.h>

int find_max(int* array, int n){
    int i = 0; 
    int max = array[0];
    for(i = 0; i < n; ++i){
        if(array[i] > max)
            max = array[i];
            
    }
    return max;
}

int main(){
    int array[] = {-1, 100, 25, 78, 106, 9, -45, 16};
    int m = 0;
    m = find_max(array, 8);
    printf("%d\n", m);
    return 0;
}