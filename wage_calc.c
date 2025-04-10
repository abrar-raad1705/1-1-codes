#include <stdio.h>
int main(){
    float h,w;
    scanf("%f", &h);

    if(h>40) w = ((h-40)*(10*(150.0/100)))+40*10;
    else w = h*10;

    printf("Weekly wage: %0.2f", w);
}