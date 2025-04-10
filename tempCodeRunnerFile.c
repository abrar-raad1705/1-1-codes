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
}