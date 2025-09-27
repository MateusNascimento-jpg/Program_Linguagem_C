#include <stdio.h>
#include <math.h>
int main (){

    int a, b, c, d;
    float media_simples;
    float media_geo;
    float media_har;


    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //Média Simples
    media_simples = (a+b+c+d)/ 4.0;

    printf("sua media simples sera: %.1f\n\n", media_simples);


    //Média geométrica
    media_geo = pow((a*b*c*d),(1.0/4.0));


    printf("sua media geometrica sera: %.2f\n\n", media_geo);

    //Média Harmônica
    media_har = (4.0)/(1.0 / a ) + (1.0 / b ) + (1.0 / c ) + (1.0 / d);

    printf("sua media harmonica sera: %.2f", media_har);














    return 0;
}
