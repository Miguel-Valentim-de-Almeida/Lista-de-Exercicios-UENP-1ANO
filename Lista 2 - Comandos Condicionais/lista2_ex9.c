#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float x, y;

    printf("Digite o valor de X: ");
    scanf("%f", &x);

    printf("Digite o valor de Y: ");

    scanf("%f", &y);

    if(x>0 && y>0){
        printf("O ponto A(%.1f, %.1f) pertence ao 1° Quadrante", x, y);
    }
    else if(x<0 && y>0){
        printf("O ponto A(%.1f, %.1f) pertence ao 2° Quadrante", x, y);
    }
    else if(x<0 && y<0){
        printf("O ponto A(%.1f, %.1f) pertence ao 3° Quadrante", x, y);
    }
    else if(x>0 && y<0){
        printf("O ponto A(%.1f, %.1f) pertence ao 4° Quadrante", x, y);
    }
    else if(x != 0 && y==0){
        printf("O ponto A(%.1f, %.1f) pertence ao eixo x", x, y);
    }
    else if(x==0 && y != 0){
        printf("O ponto A(%.1f, %.1f) pertence ao eixo y", x, y);
    }
    else if(x==0 && y==0){
        printf("O ponto A(%.1f, %.1f) pertence à origem ", x, y);
    }
    return 0;
}
