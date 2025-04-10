#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);

    switch(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u'){
        case 1: printf("Vowel");
        break;
        // case 0: printf("Consonent");
        // break;
        default: printf("Consonent");
    }
}