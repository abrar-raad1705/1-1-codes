#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);

    if(c>='a' && c<='z'){
        int val = c - 'a';
        printf("Upp: %c", 65+val);
    }
    else{
        int val = c - 'A';
        printf("Low: %c", 97+val);
    }
    return 0;
}