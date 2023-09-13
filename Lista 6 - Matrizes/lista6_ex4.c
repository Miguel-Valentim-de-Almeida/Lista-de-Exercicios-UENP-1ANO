#include <stdio.h>
#include <locale.h>
void Menor(float matriz[][5]){
    int i, j;
    float menor = matriz[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("Menor: %.2f", menor);
}
int main(){
    setlocale(LC_CTYPE,"Portuguese");
    float matriz[3][5];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("Insira um valor para a posição %d %d: ",i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    Menor(matriz);
    return 0;
}