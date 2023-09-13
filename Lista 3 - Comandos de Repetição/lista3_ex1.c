#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int x,y, i;

    printf("Digite o primeiro número da sequência: ");
    scanf("%d", &x);

    printf("Digite o último número da sequência: ");
    scanf("%d", &y);

    if(x<y){
        printf("Todos os ímpares entre %d e %d: ", x,y);
        for(i = x; i<=y;i++){
            if(i % 2 != 0){
                printf("%d ", i);
            }
        }
    }
    else{
        printf("Todos os ímpares entre %d e %d: ", x,y);
        for(i=x;i>=y;i--){
            if(i % 2 != 0){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
