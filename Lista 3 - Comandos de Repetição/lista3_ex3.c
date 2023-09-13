#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float n, i, somador = 0.0;

    printf("Digite um denomidador inteiro maior do que zero: ");
    scanf("%f", &n);

    while(n == 0){
        printf("Zero não pode ser usado como denominador, digite novamente: ");
        scanf("%d", &n);
    }

    for(i=1.0;i<=n;i++){
        somador+=(1.0/i);
    }
    printf("A soma é: %.2f", somador);
    return 0;
}
