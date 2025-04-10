#include <stdio.h>
int main(){
    int a,b,c,m;
    scanf("%d %d %d", &a, &b, &c);

    switch(a>b){
        case 1: switch(a>c){
            case 1: m = a;
            break;
            case 0: m = c;
            break;
        }
        break;
        case 0: switch(b>c){
            case 1: m = b;
            break;
            case 0: m = c;
            break;
        }
        break;
    }
    printf("MAX: %d", m);
}