#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    n = (n<0) ? -n : n;

    printf("Abs val: %d", n);
}
//Use of conditional operator