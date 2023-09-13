#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int i, idade, count = 0, count2 = 0, continuar;

    do{
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        if(idade<18){
            count++;
        }
        else if(idade>30){
            count2++;
        }
        fflush(stdin);
        printf("Quer continuar?\n[ 1 ] SIM\n[ 0 ] NÃO\n");
        scanf("%d", &continuar);
    }while(continuar!=0);

    printf("Pessoas menores de 18 anos: %d\n", count);
    printf("Pessoas com mais de 30 anos: %d", count2);
    return 0;
}
