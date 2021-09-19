/*
Escreva um programa em C++ para ler o nome e a idade de uma pessoa, e exibir quantos
dias de vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias.
Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA,
VOCÊ JÁ VIVEU 6935 DIAS
*/

#include <stdio.h>

#define NAME 80

int main()
{
  /* é necessário colocar "+1" para armazenar o caracter
    terminador de strings '\0' */
    char name[NAME + 1];
    int age, days;

    printf("Qual seu nome?\n");
    scanf("%s", name);

    printf("Qual sua idade %s?\n", name);
    scanf("%d", &age);

    days = age * 365;

    printf("%s, você já viveu %d dias\n",name,days);

    return 0;
}