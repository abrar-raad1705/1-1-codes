#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        float x;
        scanf("%f", &x);

        //Floor(x)
        printf("Floor: %d\n", (int)x);

        //Ceil(x)
        printf("Ceil: %f\n", (x+1)-(x-(int)x));

        //Round(x)
        float chk = x - (int)x;
        if(chk < 0.5) printf("Round:%d\n", (int)x);
        else printf("Round:%f\n", (x+1)-(x-(int)x));
    }
}
