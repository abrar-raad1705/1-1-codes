#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **mkarr(int r, int c){
    int **a = (int**)malloc(r*sizeof(int*));
    for(int i=0; i<r; i++){
        *(a+i) = (int*) malloc(c*sizeof(int));
    }
    return **a;
}

int main(){
    
}