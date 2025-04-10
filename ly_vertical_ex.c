#include <stdio.h>
int main(){
    int y; // m->marks;
    scanf("%d", &y);

    if(y%400 == 0) printf("Leap year\n");
    else if(y%100 == 0) printf("Not leap year\n");
    else if(y%4 == 0) printf("Leap year\n");
    else printf("Not leap year\n");
}