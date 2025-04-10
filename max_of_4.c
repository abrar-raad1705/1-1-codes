#include <stdio.h>
int main(){
    int a,b,c,d,m; //m -> max
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b) m = a;
    else m = b;

    if(c>m) m = c;
    if(d>m) m = d;

    printf("MAX: %d\n", m);
}