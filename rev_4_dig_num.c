#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int ans = (n%10)*1000+((n/10)%10)*100+((n/100)%10)*10+(n/1000);
    printf("%d", ans);
    return 0;
}