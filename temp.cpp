#include <bits/stdc++.h>
using namespace std;

int fun1(int a, int b){
    printf("fun1\n");
    printf("%d\n", a+b);
}

int fun2(int a, int b){
    printf("fun2\n");
    printf("%d\n", a-b);
}

int main(){
	
    int (*funp)(int a, int b);
    funp = fun1;
    (*funp)(1,2);
    funp = fun2;
    (*funp)(1,2);
	return 0;
}