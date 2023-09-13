#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0;i<n;i++){
        printf("Insira o número inteiro da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor na ordem inversa:\n");
    for(int i=1;i<=n;i++){
        printf("%d ", vetor[n - i]);
    }
    return 0;
}
