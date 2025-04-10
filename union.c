#include <stdio.h>

union t{
    int i;
    char c;
    double f;
}u;

int main(){
    u.i = 5;
    u.c = 'a';
    u.f = 4.356;

    u.c = 'v';
    scanf("%d", &u.i);

    union t *ptr = &u;
    printf("%d %d\n", ptr -> i, (*ptr).i);
    printf("%d %c %lf\n", u.i, u.c, u.f); // Can be worked with only one member at a time
    printf("%d", sizeof(u)); //Declares size of the highest sized member
}

// TODO: Use of UNION for encryption
/*
#include <stdio.h>

union u{
    int i;
    char c[4];
};

union u enc(union u a){
    char t = a.c[0];
    a.c[0] = a.c[1];
    a.c[1] = t;
    t = a.c[2];
    a.c[2] = a.c[3];
    a.c[3] = t;

    return a;
}

int main(){
    union u a;
    scanf("%d", &a.i);
    printf("%x\n", a.i);

    a = enc(a);
    printf("%x", a.i);
}
*/