#include <stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d %d %d", &a, &b, &c);

    a = a+b+c;
    b = a-b-c;
    c = a-c-b;
    a = a-b-c;
    
    printf("%d %d %d", a, b, c);
}