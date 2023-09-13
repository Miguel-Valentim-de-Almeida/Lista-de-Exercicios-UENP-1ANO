#include <stdio.h>
#include <locale.h>

void soma(int ordem, float matriz[][ordem]){
    int i, j;
    float soma = 0;
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            if(i < j){
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos acima da diagonal principal: %.2f", soma);
}

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int ordem, i, j;
    printf("Insira a ordem da matriz quadrada (número inteiro): ");
    scanf("%d", &ordem);
    float matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("Insira o valor da posição %d %d: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    soma(ordem, matriz);
    return 0;
}