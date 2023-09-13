#include <stdio.h>

int main(){
    int numerador = 1;
    float denominador, s = 0;

    for(denominador=1.0;denominador<=50.0;denominador++){
        s += (numerador/denominador);
        numerador += 2;
    }
    printf("S = %.2f", s);
    return 0;
}
