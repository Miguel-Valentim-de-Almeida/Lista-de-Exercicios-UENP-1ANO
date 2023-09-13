#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    float matriz[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira o número inteiro da posição %d %d: ",i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    float media = (matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3] + matriz[4][4])/5;
    printf("Média: %.2f", media);
    return 0;
}