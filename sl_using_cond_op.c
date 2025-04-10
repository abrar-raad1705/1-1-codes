#include <stdio.h>
int main(){
    int a,b,c,l,sl;
    scanf("%d %d %d", &a, &b, &c);

    sl = (a>b)?
        (b>c)? b: (c>a)? a:c :
        (a>c)? a: (c>b)? b:c;

    printf("Second largest: %d", sl);
}