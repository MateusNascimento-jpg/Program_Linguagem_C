#include<stdio.h>

int main (){
    char nome [20];
    char sobrenome [20];

    printf("DIGITE SEU NOME: ");
    scanf("%s", &nome);

    printf("DIGITE SEU SOBRENOME: ");
    scanf("%s", &sobrenome);

    printf("%s %s", &nome,&sobrenome);






    return 0;
}
