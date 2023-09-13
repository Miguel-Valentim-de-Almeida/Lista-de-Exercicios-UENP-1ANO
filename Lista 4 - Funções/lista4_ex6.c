#include <stdio.h>
#include <locale.h>

float imc(float peso, float altura){
    float imc;
    imc = peso/(altura*altura);
    return imc;
}

int condicao(float imc){
    if(imc < 18.5){
        return 1;
    }
    else if(imc >= 18.5 && imc <= 24.9){
        return 2;
    }
    else if(imc >= 25 && imc <= 29.9){
        return 3;
    }
    else{
        return 4;
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float p, a, f, f2;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &p);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &a);

    f = imc(p,a);

    printf("Seu IMC é: %.2f\n", f);

    f2 = condicao(f);

    if(f2 == 1){
        printf("Você está ABAIXO DO PESO!");
    }
    else if(f2 == 2){
        printf("Você está com o PESO NORMAL!");
    }
    else if(f2 == 3){
        printf("Você está em SOBREPESO!");
    }
    else if(f2 == 4){
        printf("Você está OBESO!");
    }
    return 0;
}
