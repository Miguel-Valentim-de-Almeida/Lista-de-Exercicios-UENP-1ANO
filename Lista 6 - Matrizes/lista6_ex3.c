#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int matriz[5][3], i, j, vetor[15], count = 0;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("Insira o número inteiro da posição %d %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            if (matriz[i][j] % 3 == 0){
                count++;
                vetor[count - 1] = matriz[i][j];
                }
            }
    }
    for(i=0;i<count;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}