#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int num, count = 0, continuar;
    float media, somador = 0;

    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if(num >= 10 && num <= 50 && num % 7 == 0){
            count++;
            somador += num;
        }

        printf("Deseja continuar?\n[ 1 ] SIM\n[ 0 ] NÃO\n");
        scanf("%d", &continuar);
        fflush(stdin);
    }while(continuar!=0);

    printf("Quantidade de número múltiplos de 7 entre 10 e 50: %d\n", count);
    media = somador/count;
    printf("Média entre esses números: %.2f\n", media);
    return 0;
}
