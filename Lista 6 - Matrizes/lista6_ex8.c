#include <stdio.h>
#include <locale.h>

void soma(int ordem, float matriz[][ordem]){
    int i;
    float somaElementos = 0;
    for(i = 1; i < ordem - 1; i++){
        somaElementos += matriz[i][0] + matriz[i][ordem - 1];
        somaElementos += matriz[0][i] + matriz[ordem - 1][i];
    }
    printf("Soma dos elementos que não pertencem a nenhuma das diagonais: %.2f", somaElementos);
}

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int ordem, i, j;
    printf("Insira a ordem da matriz quadrática (número inteiro): ");
    scanf("%d", &ordem);
    float matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("Insira um valor para a posição %d %d: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    soma(ordem, matriz);
    return 0;
}