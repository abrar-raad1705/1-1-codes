#include <stdio.h>
int main(){
    int y; // m->marks;
    scanf("%d", &y);

    // if(y%400 == 0 || (y%4 == 0 && y%100 != 0)) printf("Leap year\n");
    // else printf("Not leap year\n");

    //There is another process, by focusing on not leap years!
    if(y%4 != 0 || (y%100 == 0 && y%400 != 0)) printf("Not leap year\n");
    else printf("Leap year\n");

    return 0;
}