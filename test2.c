#include <stdio.h>
#include <stdlib.h>

void free2d(int **a, int r, int c);

int** init2d(int r, int c){
    int **a = (int**)malloc(r*sizeof(int*));
    for(int i=0; i<r; i++){
        *(a+i) = (int*)malloc(c*sizeof(int));
    }
    return a;
}

void in2d(int **a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", *(a+i)+j);
        }
    }
}

void out2d(int **a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n");
    }
}

int** mulp(int **m1, int **m2, int r1, int c1, int r2, int c2){
    int **ans = init2d(r1, c2);
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int sum = 0;
            for(int k=0; k<c1; k++){
                //m1[r1][k] * m2[k][c2];
                sum += (*(*(m1+i)+k)) * (*(*(m2+k)+j));
            }
            *(*(ans+i)+j) = sum;
        }
    }
    return ans;
}

void trns(int **a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=i+1; j<c; j++){
            int temp = *(*(a+i)+j);
            *(*(a+i)+j) = *(*(a+j)+i);
            *(*(a+j)+i) = temp;
        }
    }
}

void c_q(int **a, int r, int c, int chk){
    int **ans = init2d(r, c);
    int k = 0;
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum += *(*(a+i)+j);
        }
        if(sum <= chk){
            for(int j=0; j<c; j++){
                *(*(ans+k)+j) = *(*(a+i)+j);
            }
            k++;
        }
    }
    
    for(int i=0; i<k; i++){
        for(int j=0; j<c; j++){
            printf("%d ", *(*(ans+i)+j));
        }
        printf("\n");
    }
    free(ans);
}

void free2d(int **a, int r, int c){
    for(int i=0; i<r; i++){
        free(*(a+i));
    }
    free(a);
}

int main(){
    // int r1, c1, r2, c2;
    // scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    int r1, c1; scanf("%d %d", &r1, &c1);

    int **m1, **m2;
    m1 = init2d(r1,c1);
    // m2 = init2d(r2,c2);

    in2d(m1,r1,c1);
    int chk; scanf("%d", &chk);

    // in2d(m2,r2,c2);

    // int **ans = mulp(m1,m2,r1,c1,r2,c2);
    // trns(m1, r1, c1);

    // out2d(ans, r1, c2);
    c_q(m1, r1, c1, chk);
    free(m1);
}