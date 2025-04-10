#include <stdio.h>
int main(){
    int n;
    char c;
    scanf("%c %d", &c, &n);

    int val = c-'A';
    val = (val+n)%26;
    printf("%dth letter from %c is: %c", n, c, val+65);
    return 0;
}