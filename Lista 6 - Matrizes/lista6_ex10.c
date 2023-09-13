#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int matriz[3][7], i, j, count = 0;
    for(i=0;i<3;i++){
        for(j=0;j<7;j++){
            printf("Insira um valor para a posição %d %d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<7;j++){
            if((i==0 && j==0) || (i==0 && j==6) || (i==2 && j==0) || (i==2 && j==6)){
                continue;
            }
            if (matriz[i][j] >= 10 && matriz[i][j] <= 50){
                count++;
            }
        }
    }
    printf("Quantidade de elementos da matriz no intervalo entre 10 e 50 desconsiderando os extremos: %d\n", count);
    printf("Segunda matriz\n");
    for(i=0;i<3;i++){
        for(j=0;j<7;j++){
            if(matriz[i][j] != 10 && matriz[i][j] != 50){
                printf("%d ", matriz[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
