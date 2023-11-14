#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int matriz[4][4], x;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            printf("Insira o número inteiro da posição %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Insira um número inteiro x: ");
    scanf("%d", &x);

    int *ponteiro = &matriz[0][0], count = 0;
    for(int i = 0; i<8; i++){
        if(x == *(ponteiro + i)){
            count++;
        }
    }
    printf("x aparece %d vezes na matriz!", count);
    return 0;
}