#include <stdio.h>
#include <locale.h>

int tabuada(int n){
    int i;
    printf("TABUADA  DO %d\n", n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n", n, i, (n*i));
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int num, f;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    f = (tabuada(num));
    return 0;
}
