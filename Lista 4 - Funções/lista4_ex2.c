#include <stdio.h>
#include <locale.h>
int primo(int num){
    int i, count = 0;
    for(i=num;i>0;i--){
        if(num%i == 0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, funcao;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    funcao = primo(n);

    if(funcao == 1){
        printf("%d � primo!", n);
    }
    else if(funcao == 0){
        printf("%d n�o � primo", n);
    }
    return 0;
}
