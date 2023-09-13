#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int num1, num2,  num3;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Ordem decrescente: ");

    if(num1 > num2 && num1 > num3){
        printf("%d ", num1);
        if(num2 > num3){
            printf("%d %d", num2, num3);
        }
        else{
            printf("%d %d", num3, num2);
        }
    }
    else if(num2 > num1 && num2 > num3){
        printf("%d ", num2);
        if(num1 > num3){
            printf("%d %d", num1, num3);
        }
        else{
            printf("%d %d", num3, num1);
        }
    }
    else if(num3 > num1 && num3 > num2){
        printf("%d ", num3);
        if(num1 > num2){
            printf("%d %d", num1, num2);
        }
        else{
            printf("%d %d", num2, num1);
        }
    }
    return 0;
}
