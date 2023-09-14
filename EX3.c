#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char nome[5][20];
    float preco[5];
    int i;
    
    for(i = 0; i < 5; i++){
          printf("\ndigite o nome da %dª mercadoria:", i + 1);
          scanf("%s", &nome[i]);
          printf("\ndigite o preço da %dª mercadoria:", i + 1);
          scanf("%f", &preco);
    }
    
    float novo_preco;
    
    for(i = 0; i < 5; i++){     
          if(preco[i] < 1000){
          novo_preco = preco[i] * 0.05;
          }else{
          novo_preco = preco[i] * 0.07;
          }
          printf("%s: R$ %.2f\n", nome[i], novo_preco);          
    } 
    return 0;
}
