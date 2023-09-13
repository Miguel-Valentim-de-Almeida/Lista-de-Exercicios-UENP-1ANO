#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int num, i, count = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d é primo!", num);
    }
    else{
        printf("%d não é primo!", num);
    }
    return 0;
}
