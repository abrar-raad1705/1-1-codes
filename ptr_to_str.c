#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int d, m, y;
}date;

date ret_date(int d, int m, int y){
    date temp;
    temp.d = d, temp.m = m, temp.y = y;
    return temp;
}

void ret_date_ptr(date *dat, int d, int m, int y){
    dat -> d = d;
    dat -> m = m;
    dat -> y = y;
}

date *
create_date(int d, int m, int y){
    date *ptr = malloc(sizeof(date));
    ptr -> d = d;
    ptr -> m = m;
    ptr -> y = y;

    return ptr;
}

int main(){
    // date t = {4,12,2024};
    // printf("%d %d %d\n", t.d, t.m, t.y);

    // t = ret_date(12,12,2005);
    // printf("%d %d %d\n", t.d, t.m, t.y);
    
    // date *ptr = &t;
    // ret_date_ptr(&t, 11,11,2011);
    // printf("%d %d %d\n", t.d, t.m, t.y);

    date *p = create_date(11,11,2011);
    printf("%d %d %d", p->d, p->m, p->y);

    free(p);
}