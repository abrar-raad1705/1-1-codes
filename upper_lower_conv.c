#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    /*Try this*/
    // char c = 65;
    // printf("%c", c);
    if(c>='a' && c<='z') c = c-32;
    else if(c>='A' && c<='Z') c = c+32;
    
    printf("%c", c);
    return 0;
}
