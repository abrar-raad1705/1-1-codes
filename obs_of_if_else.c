#include <stdio.h>
int main(){
    int m; // m->marks;
    scanf("%d", &m);

    if(m>=90) printf("A\n");
    else if(m>=80) printf("B\n");
    else if(m>=70) printf("C\n");
    else if(m>=60) printf("D\n");
    else printf("F\n");
}