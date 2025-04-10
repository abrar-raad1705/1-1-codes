#include <stdio.h>

struct{
    int a,b,c;
}data_1;

typedef struct{
    int a,b,c;
}data_2;

// struct data_3{
//     int a,b,c;
// }t2;

typedef struct data_3{
    int a,b,c;
}d3;
//* Not needed 11-13 anymore. 15-17 e 2 kaj eksathe hoye gese :D

int main(){
    data_1.a = 1, data_1.b = 2, data_1.c = 3;
    printf("%d %d %d\n", data_1.a, data_1.b, data_1.c);

    data_2 t;
    t.a = 4, t.b = 5, t.c = 6;
    printf("%d %d %d\n", t.a, t.b, t.c);

    data_2 *p = &t;
    p->a  = 40;
    printf("%d %d %d\n", p->a, p->b, p->c);

    struct data_3 t2;
    // d3 t2;
    t2.a = 7, t2.b = 8, t2.c = 9;
    printf("%d %d %d\n", t2.a, t2.b, t2.c);

    struct data_3 *p2 = &t2;
    printf("%d %d %d\n", p2->a, p2->b, p2->c);

    d3 test = {1, 2, 3};
    // d3 test;
    //! test = {1, 2, 3};

    printf("%d %d %d", test.a, test.b, test.c);

}

/*
#include <stdio.h>

typedef struct{
    int v;
}var1_type_name;

struct var2_type_name{
    int v;
}variable1;

struct{
    int v;
}variable2;

int main(){
    var1_type_name a;
    a.v = 5;

    variable1.v = 10;
    struct var2_type_name variable11;
    variable11.v = 11;

    variable2.v = 15;

    printf("%d %d %d %d", a.v, variable1.v, variable11.v, variable2.v);
}
*/

/*
#include <stdio.h>

typedef struct{
    struct point{
        int x,y;
    }p2;
    struct{
        int x,y;
    }p;
    struct{
        int x,y;
    };
    int r;
}circle;

int main(){
    circle c;
    c.x = 1, c.y = 1, c.r = 5;
    c.p.x = 2, c.p.y = 2;
    c.p2.x = 4, c.p2.y = 4;
    struct point p2;
    p2.x = 3, p2.y = 3;
    printf("%d %d %d\n", c.x, c.y, c.r);
    printf("%d %d\n", c.p.x, c.p.y);
    printf("%d %d\n", c.p2.x, c.p2.y);
    printf("%d %d", p2.x, p2.y);
}
*/

/*
#include <stdio.h>

struct tag{
    int v;
};

struct{
    int v;
}vn;

typedef struct{
    char c1;
    // int v;
    char c2;
    int v;
}str;

int main(){
    struct tag t;
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(t));
    printf("%d\n", sizeof(vn));
    printf("%d", sizeof(str)); //Uses concept of memory block. Each block is of 4 bytes.
}
*/