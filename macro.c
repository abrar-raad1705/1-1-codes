#include <stdio.h>

#define sq(x) x*x
#define swp(t,x,y) {t = x; x = y; y = t;}
#define max(a,b) (a>b)? a:b

int main(){
    int a = 5;
    double m = 3.4;
    // printf("%d %lf", sq(a), sq(b));
    int b = 3, t;
    if(a>b) swp(t,a,b)
    printf("%d", max(a,b));
}