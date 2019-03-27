#include<stdio.h>

int Existe(int x , int v[], int n){
    int i;
    for(i=0;i<n;i++)
        if(v[i] == x)
            return 1;
    return 0;
}

void inter(int A[], int B[]){
    int i, j, k, countC = 0, C[5] = {};
    for(i=0; i<5; i++) printf("%d\t", i); printf("\n");
    for(i=0; i<5; i++) printf("%d\t", A[i]); printf("A\n");
    for(i=0; i<5; i++) printf("%d\t", B[i]); printf("B\n");

    for(i=0;i<5;i++){
        printf("i = %d\n", i);
        for(j=0; j < 5; j++){
            printf("\tj = %d\n", j);
            if(A[i] == B[j]){
                printf("\t\tA[i] == B[j] (True)");
                if(!Existe(A[i], C, 5)){
                    C[countC] = A[i];
                    countC++;
                }
            }
        }
    }
    printf("Interseccao:\n");
    for(i=0; i< countC; i++){
        printf("%d\t%d\n", i, C[i]);
    }
}

int main(){
    int A[5] = {1,2,3,4,5}, B[5] = {1,4,5,8,3};
    inter(A, B);
    return 0;
}
