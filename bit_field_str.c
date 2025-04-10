#include <stdio.h>

struct tag{
    unsigned int a:2;
    unsigned int b:1;
    unsigned int c:1;
    unsigned int d:1;

    //TODO: Try out for signed data-type
    // int a:2;
    // int b:1;
    // int c:1;
    // int d:1;
}s;

int main(){
    s.a = 3;
    s.b = 1;
    s.c = 0;
    s.d = 0;

    printf("%d %d %d %d", s.a, s.b, s.c, s.d);
}