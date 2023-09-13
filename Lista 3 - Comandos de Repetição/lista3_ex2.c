#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite outro número inteiro: ");
    scanf("%d", &y);
    if(x<y){
        while(x<=y){
            if(x % 5 == 2 || x % 5 == 3){
                printf("%d ", x);
            }
            x++;
        }
    }
    else{
        while(y<=x){
            if(y % 5 == 2 || y % 5 == 3){
                printf("%d ", y);
            }
            y++;
        }
    }
    return 0;
}
