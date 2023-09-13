#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    float matriz[3][5], vetor[5];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
        printf("Insira o número da posição %d %d: ",i,j);
        scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0;i<5;i++){
        float somacoluna = 0;
        for (j = 0; j < 3; j++) {
            somacoluna += matriz[j][i];
        }
        vetor[i] = somacoluna;
    }
    for(i=0;i<5;i++){
        printf("%.2f ", vetor[i]);
    }
    return 0;
}