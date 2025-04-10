#include <stdio.h>
#include <string.h>

int main(){
    char s[100], w[100];
    gets(s); gets(w);
    int ans = -1;

    for(int i=0; i<strlen(s)-1; i++){
        if((i==0 && s[i] == w[0]) || s[i] == w[0] && s[i-1] == ' '){
            int w_i = 0, cnt = 0;
            while(s[i] != ' ' && s[i] != '\0'){
                if(s[i] != w[w_i]) break;
                i++, w_i++, cnt++;
            }
            if(cnt == strlen(w)){
                ans = i-strlen(w);
                break;
            }
        }
    }
    if(ans == -1) printf("NF");
    else printf("Found at idx: %d", ans);
}