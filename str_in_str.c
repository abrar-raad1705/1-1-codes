#include <stdio.h>

typedef struct{
    struct point{
        int x,y;
    }p2,p3;
    struct{
        int x,y;
    }p;
    struct{
        int x,y;
    };
    int r;
}circle;

/**/

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