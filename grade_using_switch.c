#include <stdio.h>
int main(){
    int m;
    char g;
    scanf("%d", &m);

    switch(m/10){
        case 10:
        case 9: g = 'A';
        break;
        case 8: g = 'B';
        break;
        case 7: g = 'C';
        break;
        case 6: g = 'D';
        break;
        default: g = 'F';
    }

    printf("Grade: %c", g);
}