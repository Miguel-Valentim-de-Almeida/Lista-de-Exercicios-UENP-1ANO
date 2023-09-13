#include <stdio.h>
#include <locale.h>

int divisores(int num){
    int i, count = 0;
    printf("Divisores de %d: ", num);
    for(i=1;i<=num;i++){
        if(num%i == 0){
            printf("%d ", i);
            count++;
        }
    }
    printf("\nNúmero de divisores: %d", count);
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n,f;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    f = divisores(n);

    return 0;
}
