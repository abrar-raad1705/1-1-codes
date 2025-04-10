#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int ugcd = __gcd(a,b);
        printf("%d", ugcd);
    }
}