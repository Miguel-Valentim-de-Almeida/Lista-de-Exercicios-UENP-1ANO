#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int num, i, count = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d � primo!", num);
    }
    else{
        printf("%d n�o � primo!", num);
    }
    return 0;
}
