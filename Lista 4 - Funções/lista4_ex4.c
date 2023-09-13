#include <stdio.h>
#include <locale.h>

float potencia(float x, float n){
    float pot = 1.0, i;
    for(i=0.0;i<n;i++){
        pot*=x;
    }
    return pot;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float x1, n1, funcao;

    printf("Digite o valor de x: ");
    scanf("%f", &x1);

    printf("Digite o valor de n: ");
    scanf("%f", &n1);

    funcao = potencia(x1,n1);

    printf("%.2f elevado à %.2f: %.2f", x1, n1, funcao);
    return 0;
}
