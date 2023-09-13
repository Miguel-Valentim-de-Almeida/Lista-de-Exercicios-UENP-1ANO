# include <stdio.h>
int main()
{
    int horas, minutos, segundos, totalSegundos;
    
    printf("Digite um horário no formato horas:minutos:segundos: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);
    
    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
    
    printf("%d:%d:%d em segundos = %d \n", horas, minutos, segundos, totalSegundos);
    return 0;
}

