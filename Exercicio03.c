/*
Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa em
C++ para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele
conseguiu colocar no tanque.
*/

#include<stdio.h>

#include<stdlib.h>

int main()

{

   float result, gasolinaVal, valor;

   printf("Qual é o preço da gasolina:\n");

   scanf("%f",&gasolinaVal);

   printf("Quanto você pagou:\n");

   scanf("%f",&valor);

   result = valor/gasolinaVal;

   printf("Você colocou no seu carro %f de gasolina.",result);

   return 0;

}
