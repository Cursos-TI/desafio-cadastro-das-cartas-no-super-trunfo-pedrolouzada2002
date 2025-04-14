#include <stdio.h>

int main() {
char estado , estado2;
char codigodacarta[3] , nomedacidade[11] , codigo2dacarta[3] , nome2dacidade[11];
int populacao , npt , populacao2 , npt2;
float area , pib , area2 , pib2;

printf("Escreva o Estado da sua carta: \n");
scanf("%s" , &estado);

printf("Escreva o Código da sua carta: \n");
scanf("%s" , &codigodacarta[3]);

printf("Escreva o Nome da Cidade: \n");
scanf("%s" , &nomedacidade[20]);

printf("Escreva a População da sua carta: \n");
scanf("%d" , &populacao);

printf("Escreva a quantidade de Pontos Turísticos da sua carta: \n");
scanf("%d" , &npt);

printf("Escreva a Área em km2 da sua carta: \n");
scanf("%f" , &area);

printf("Escreva o PIB da sua carta: \n");
scanf("%f" , &pib);
//Fim da coleta de dados da primeira carta. Vamos á segunda.

printf("Agora vamos ao dados da segunda carta:\n");

printf("Escreva o Estado da sua carta: \n");
scanf("%s" , &estado2);

printf("Escreva o Código da sua carta: \n");
scanf("%s" , &codigo2dacarta[3]);

printf("Escreva o Nome da Cidade: \n");
scanf("%s" , &nome2dacidade[20]);

printf("Escreva a População da sua carta: \n");
scanf("%d" , &populacao2);

printf("Escreva a quantidade de Pontos Turísticos da sua carta: \n");
scanf("%d" , &npt2);

printf("Escreva a Área em km2 da sua carta: \n");
scanf("%f" , &area2);

printf("Escreva o PIB da sua carta: \n");
scanf("%f" , &pib2);

printf("Aqui estão seus dados da Carta 01");
printf("Estado: %s\n" , estado);
printf("Código da Carta: %s\n" , codigodacarta[20]);
printf("Sua cidade é: %s\n" , nomedacidade[11]);
printf("Sua População é: %d\n" , populacao);
printf("Sua carta tem %s pontos turísticos.\n" , npt);
printf("A Área da sua cidade é: %f\n" , area);
printf("O PIB da sua cidade é: %f\n" , pib);

printf("Aqui estão seus dados da Carta 02");
printf("Estado: %s\n" , estado2);
printf("Código da Carta: %s\n" , codigo2dacarta[20]);
printf("Sua cidade é: %s\n" , nome2dacidade[11]);
printf("Sua População é: %d\n" , populacao2);
printf("Sua carta tem %s pontos turísticos.\n" , npt2);
printf("A Área da sua cidade é: %f\n" , area2);
printf("O PIB da sua cidade é: %f\n" , pib2);

return 0;


}
