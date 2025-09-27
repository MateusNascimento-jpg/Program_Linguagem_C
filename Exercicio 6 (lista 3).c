
#include <stdio.h>
#include <math.h>
#define MAX 20

int main (){
    float vetor [MAX] = {1,2,3,4,5,6,7,8,9,10};
    float vetor_2[MAX];
    int tam = 10;
    int i = 0;


    for(i=0; i < tam ; i++){
        vetor_2[i] = sqrt(vetor[i]);
        printf("%.1f ", vetor_2[i]);
    }













    return 0;
}
