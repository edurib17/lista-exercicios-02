/*
O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um
programa em C++ que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor
a pagar. Assuma que abalança já desconte o peso do prato.
*/

#include<stdio.h>

#include<stdlib.h>

int main()

{

   float peso_refeicao, valor;

   printf("Qual é o peso da refeição (em Kg)?:\n");

   scanf("%f",&peso_refeicao);
   
   valor =  peso_refeicao * 35;
   
   printf("O valor a pagar é: R$  %f",valor);

   return 0;

}
