#include  <stdio.h>
#include  <stdlib.h>
#include <time.h>

int main() {

    printf ("Desafio super trunfo-países!\n");
    
     // carta1
    int carta1 = 1;
    char estado [30] = "Ceara";
    printf("estado: %s\n", estado);
    char codigo [30] = "A01";
    printf("codigo: %s\n", codigo);
    char cidade [30] = "Fortaleza";
    printf("cidade: %s\n", cidade);
    int populacao = 50000;
    printf("população: %d habitantes\n", populacao);
    float area = 148.25;
    printf("área: %.2f km²\n", area);
    float pib = 100000000;
    printf("pib: %.2f reais\n", pib);
    int pontos_turisticos = 35;
    printf("pontos turisticos: %d\n", pontos_turisticos);
    float densidadePopulacional =  populacao / area;
    float pibPerCapita = pib / populacao;
    printf("pib per capita: %.2f reais\n", pibPerCapita);
    printf("densidade populacional: %.2f km² \n", densidadePopulacional);
    float densidadepopulacionalinversa = 2.96;
    float superpoder = populacao + area + pib + pontos_turisticos + pibPerCapita + densidadepopulacionalinversa;
    printf("super poder: %.2f\n", superpoder);

     // carta2
    int carta2 = 2;
    char estado2 [30]= "São Paulo";
    printf("estado: %s\n", estado2);
    char codigo2 [30] = "B02";
    printf("codigo: %s\n", codigo2);
    char cidade2 [30] = "São Paulo";
    printf("cidade: %s\n", cidade2);
    int populacao2 = 123000;
    printf("população: %d habitantes\n", populacao2);
    float area2 = 134.25;
    printf("área: %.2f km²\n", area2);
    float pib2 = 290000000;
    printf("pib: %.2f reais\n", pib2);
    int pontos_turisticos2 = 45;
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    float densidadePopulacional2 =  populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    printf("pib per capita: %.2f reais\n", pibPerCapita2);
    printf("densidade populacional: %.2f km² \n", densidadePopulacional2);
    float densidadepopulacionalinversa2 = 1.09;
    float superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibPerCapita2 + densidadepopulacionalinversa;
    printf("super poder: %.2f\n", superpoder2);
    

    int resultadoCarta1 = populacao;
    int resultadoCarta2 = populacao2;

    if (resultadoCarta1 > resultadoCarta2) {
        printf("Carta 1 venceu Fortaleza (CE) %d\n", &resultadoCarta1);
    } else {
        printf("Carta 2 venceu São Paulo (SP) %d\n", &resultadoCarta2);
    }

    int EscolhaJogador, EscolhaComputador;
    srand (time(0));

    printf("Escolha uma opção: ");
    printf("1.Carta 1\n");
    printf("2.Carta 2\n");
    printf("Escolha: ");
    scanf("%d", &EscolhaJogador);

     EscolhaComputador = rand() % 2 + 1;

     switch (EscolhaJogador) {
     case 1:
      printf("Jogador: Carta 1 Fortaleza - ");
      printf("população: %d habitantes\n", populacao);
      printf("área: %.2f km²\n", area);
      printf("pib: %.2f reais\n", pib);
      printf("pontos turisticos: %d\n", pontos_turisticos);
      printf("densidade populacional: %.2f km² \n", densidadePopulacional);
     break;
     case 2:
      printf("Jogador: Carta 2 São Paulo - ");
      printf("população: %d habitantes\n", populacao2);
      printf("área: %.2f km²\n", area2);
      printf("pib: %.2f reais\n", pib2);
      printf("pontos turisticos: %d\n", pontos_turisticos2);
      printf("densidade populacional: %.2f km² \n", densidadePopulacional2);                
     break;  
     default:
      printf("Opção inválida!!!\n");
     break;
     }
                
      switch (EscolhaComputador) {
      case 1:
       printf("Computador: Carta 1 Fortaleza\n");
       printf("população: %d habitantes\n", populacao);
       printf("área: %.2f km²\n", area);
       printf("pib: %.2f reais\n", pib);
       printf("pontos turisticos: %d\n", pontos_turisticos);
       printf("densidade populacional: %.2f km² \n", densidadePopulacional);
      break;
      case 2:
       printf("Computador: Carta 2 São Paulo\n");
       printf("população: %d habitantes\n", populacao2);
       printf("área: %.2f km²\n", area2);
       printf("pib: %.2f reais\n", pib2);
       printf("pontos turisticos: %d\n", pontos_turisticos2);
       printf("densidade populacional: %.2f km² \n", densidadePopulacional2);
      break;  
      default:
       printf("Opção inválida!!!\n");
      break;
      }
                 
        if (EscolhaComputador == EscolhaJogador) {
          printf("### EMPATE! ###\n");
        } else if ((EscolhaJogador == 1) && (EscolhaComputador == 2)){
          printf("### Jogador venceu! ###\n");
        } else {
          printf("### Computador venceu! ###\n");
        }
      

          int resultado1, resultado2;
          char primeiroAtributo, segundoAtributo;
          int ataque1, ataque2, defesa1, defesa2,recuo1, recuo2;

           // Gerar numero aleatório 

          srand(time(0));
          ataque1 = 1; //rand() % 100 + 1; //número entre 1 e 100
          ataque2 = 0; //rand() % 100 + 1; //número entre 1 e 100
          defesa1 = 1; //rand() % 100 + 1; //número entre 1 e 100
          defesa2 = 0; //rand() % 100 + 1; //número entre 1 e 100
          recuo1 = 0; //rand() % 100 + 1; //número entre 1 e 100
          recuo2 = 1; //rand() % 100 + 1; //número entre 1 e 100


          printf("Bem-vindo ao jogo!\n");
          printf("Escolha o primeiro atributo:\n");
          printf("A. Ataque\n");
          printf("D. Defesa\n");
          printf("R. Recuo\n");

          printf("Escolha a comparação: \n");
            scanf("%c", &primeiroAtributo);

                         
             switch (primeiroAtributo) {
             case 'A':
             case 'a':
                printf("Você escolheu a opção Ataque!\n");
                resultado1 = ataque1 > ataque2 ? 1 : 0;
                break;
             case 'D':
             case 'd':
                printf("Você escolheu a opção Defesa!\n");
                resultado1 = defesa1 > defesa2 ? 1 : 0;
                break;
             case 'R':
             case 'r':
                printf("Você escolheu a opção Recuo!\n");
                resultado1 = recuo1 > recuo2 ? 1 : 0;
                break;    
             default:
                printf("Opção de comparação inválida!!\n");
                break;
              }
            
          
                printf("Escolha o segundo atributo:\n");
                printf("Atenção! Você não pode escolher o mesmo atributo novamente!\n");
                printf("A. Ataque\n");
                printf("D. Defesa\n");
                printf("R. Recuo\n");

                printf("Escolha a comparação: \n");
                scanf(" %c", &segundoAtributo);
                
                if(primeiroAtributo == segundoAtributo)
                { 
                   printf("Você escolheu o mesmo atributo!\n");
                }  else {
                    switch (segundoAtributo) 
                  {
                  case 'A': 
                  case 'a':
                    printf("Você escolheu a opção Ataque!\n");
                    resultado2 = ataque1 > ataque2 ? 1 : 0;
                    break;
                  case 'D':
                  case 'd':
                    printf("Você escolheu a opção Defesa!\n");
                    resultado2 = defesa1 > defesa2 ? 1 : 0;
                    break;
                  case 'R':
                  case 'r':
                    printf("Você escolheu a opção Recuo!\n");
                    resultado2 = recuo1 > recuo2 ? 1 : 0;
                    break;    
                  default:
                    printf("Opção de comparação inválida!!\n");
                    break;
                  }

                  
               if(resultado1 && resultado2) {
                printf("Parabéns! Você ganhou!\n");
               } else if  (resultado1 != resultado2) {
                printf("Empate!\n");
               } else {
                printf("Infelizmente você perdeu!\n");
               }
            }
  return 0;
               

} 
   
                    
    

