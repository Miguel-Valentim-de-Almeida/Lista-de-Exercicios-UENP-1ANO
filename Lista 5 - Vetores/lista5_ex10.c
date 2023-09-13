#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Portuguese");
    int i, j;
    float vetor[20];
    for(i=0;i<20;i++){
        printf("Insira um valor para a posição %d: ",i);
        scanf("%f", &vetor[i]);
    }
    for(i=0;i<10;i++){
        float aux = vetor[i+10];
        vetor[i+10] = vetor[i];
        vetor[i] = aux;
    }
    printf("Vetor resultante da troca de posições:\n");
    for(i=0;i<20;i++){
        printf("%.2f\n", vetor[i]);
    }
    return 0;
}
