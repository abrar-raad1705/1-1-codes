#include <stdio.h>
int main(){
    int a,b,c,d,l,sl; //l->largest, sl->second_largest
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b) l = a, sl = b;
    else l = b, sl = a;

    if(c>l) sl = l, l = c;
    else if(c>sl) sl = c;

    if(d>l) sl = l, l = d;
    else if(d>sl) sl = d;

    printf("Second largest num: %d\n", sl);
}