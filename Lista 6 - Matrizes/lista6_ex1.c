#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int i, j;
    //linha coluna
    float matriz[5][3];
    for(i=0;i<5;i++){
        for(j = 0;j<3;j++){
            printf("Insira o número da posição %d %d: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0;i<5;i++){
        float somaLinha = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
        }
        printf("Soma da linha %d: %.2f\n", i, somaLinha);
    }
    return 0;
}