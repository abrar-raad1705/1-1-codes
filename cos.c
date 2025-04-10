#include <stdio.h>
// #include <math.h>

int main(){
    double ans, x, ang, nm = 1, dn = 1;
    int t, sign = -1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    ang = x;
    printf("How many terms to use?: ");
    scanf("%d", &t);

    x = x*(11.0/630);
    ans = nm;

    for(int i=1; i<=t-1; i++){
        nm *= (x*x);
        dn *= (2*i)*(2*i-1);
        ans += sign*(nm/dn);
        sign = -sign;
    }

    printf("cos(%0.2lf) = %lf ", ang,ans);

}