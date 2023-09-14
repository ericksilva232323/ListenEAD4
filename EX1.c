#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char time[5][20];
    int vitoria = 3, empate = 1, ponto_total;
    int i;
    
    for(i = 0; i < 5; i++){
          printf("\ndigite o nome do %d° time:", i + 1);
          scanf("%s", &time[i]);
          printf("\ndigite o numero de vitorias do %d° time:", i + 1);
          scanf("%f", &vitoria);
          printf("\ndigite o numero de empates do %d° time:", i + 1);
          scanf("%f", &empate);
    }
    
    ponto_total = vitoria + empate;
    
    for(i = 0; i < 5; i++){
          printf("%s %d\n", time[i], ponto_total);
    } 
    return 0;
}
