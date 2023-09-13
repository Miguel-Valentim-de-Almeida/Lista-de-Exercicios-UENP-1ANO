#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int linha, coluna, i, j;
    printf("Insira o tamanho da linha da matriz (número inteiro): ");
    scanf("%d", &linha);
    printf("Insira o tamanho da coluna da matriz (número inteiro): ");
    scanf("%d", &coluna);
    float matriz[linha][coluna];
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("Insira um valor para a posição %d %d: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    float transposta[coluna][linha];
    for(i=0;i<coluna;i++){
        for(j=0;j<linha;j++){
            transposta[i][j] = matriz[j][i];
        }
    }
    printf("Transposta\n");
    for(i=0;i<coluna;i++){
        for(j=0;j<linha;j++){
            printf("%.2f ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}