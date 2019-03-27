#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int i, contadores[6] = {0,0,0,0,0,0};
    srand(time(NULL));
    for(i=0;i<6;i++){
        contadores[rand()%6] += 1;
    }
    printf("Resultados");
    for(i=0;i<6;++i)
        printf("%d: %d vezes.\n", i+1, contadores[i]);
}
