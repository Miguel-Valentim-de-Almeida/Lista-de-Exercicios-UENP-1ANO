#include <stdio.h>
#include <locale.h>

int segundos(int horas, int minutos, int segundos){
    int totalSegundos;
    totalSegundos = (horas*3600) + (minutos * 60) + segundos;
    return totalSegundos;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int h,m, s, f;

    printf("Digite um horário no formato horas:minutos:segundos: ");
    scanf("%d:%d:%d", &h, &m, &s);

    f = segundos(h,m,s);

    printf("Total de segundos: %d", f);
    return 0;
}
