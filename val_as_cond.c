#include <stdio.h>
int main(){
    if(-40){ //Zero -> False, anything non-zero -> True
        printf("Hi!\n");
    }
    else printf("Bye!\n");

    if(0) printf("ZERO\n");
    else printf("Watch it!\n");

    int t = 5;
    printf("Check: %d\n", t>5);
    printf("Check: %d\n", t==5);
}