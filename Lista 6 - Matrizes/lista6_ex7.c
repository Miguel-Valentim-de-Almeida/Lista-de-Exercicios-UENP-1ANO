#include <stdio.h>
#include <locale.h>

void multiplicacao(int ordem, int matriz[][ordem], int x){
    int i = 0, j = ordem-1;
    while(i<ordem){;
        matriz[i][j] = matriz[i][j] * x;
        i++;
        j--;
    }
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int ordem, i, j, x;
    printf("Insira a ordem da matriz quadrática (número inteiro): ");
    scanf("%d", &ordem);
    int matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("Insira um valor inteiro para a posição %d %d: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor inteiro da constante x: ");
    scanf("%d", &x);
    multiplicacao(ordem, matriz, x);
    return 0;
}