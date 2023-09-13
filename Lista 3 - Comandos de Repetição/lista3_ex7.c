#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE,"Portuguese");
    int i, count = 0;
    printf("Os 50 primeiros múltiplos de 3 (maiores do que zero): ");
    for(i=1;i<=100000;i++){
        if(i % 3 == 0){
        count++;
        printf("%d ", i);
        if(count == 50){
            break;
        }
        }
    }
    return 0;
}
