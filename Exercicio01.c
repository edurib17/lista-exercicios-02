/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada
pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda
dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi
contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um programa em C++ para ler as
quantidades de pães e de broas, e depois calcular os dados solicitados.*/

#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
cout<<fixed;
cout.precision(2);
double paes, broas, paesbroas, poupanca;
cout<<"Informe a quantidade de pães e broas vendidos no dia: "<<endl;
cin>>paes;
cin>>broas;
paesbroas=((paes*0.12)+(broas*1.5));
poupanca = paesbroas*0.10;
cout<<"O valor total arrecadado no dia é: R$ "<<paesbroas<<endl;
cout<<"O valor a ser poupado é: R$ "<<poupanca<<endl;
}