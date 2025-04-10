#include <stdio.h>

union u{
    char ch;
    struct{
        unsigned a:1;
        unsigned b:1;
        unsigned c:1;
        unsigned d:1;
        unsigned e:1;
        unsigned f:1;
        unsigned g:1;
        unsigned h:1;
    };
};

int main(){
    union u t;
    t.ch = 'a';
    printf("%d %d %d %d %d %d %d %d\n", t.h, t.g, t.f, t.e, t.d, t.c, t.b, t.a);
}