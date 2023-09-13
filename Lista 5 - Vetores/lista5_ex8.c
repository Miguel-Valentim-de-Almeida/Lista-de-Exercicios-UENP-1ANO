#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, i, menos18 = 0, mais30 = 0;
    printf("Quantas idades serão lidas? ");
    scanf("%d", &n);
    int idade[n];
    printf("Digite 0 para encerrar o programa!\n\n");
    for(i=0;i<n;i++){
        printf("Pessoa %d\n", i+1);
        printf("Digite a sua idade: ", i);
        scanf("%d", &idade[i]);
        printf("\n");
        if(idade[i] == 0){
            break;
        }
        if(idade[i] < 18){
            menos18++;
        }
        if(idade[i] > 30){
            mais30++;
        }
    }
    printf("Total de pessoas com menos de 18 anos: %d\n", menos18);
    printf("Total de pessoas com mais de 30 anos: %d\n", mais30);
    return 0;
}
