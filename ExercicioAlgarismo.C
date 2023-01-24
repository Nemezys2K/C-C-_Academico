#include <stdio.h>
//Tecninca e Desenvolvimento de Algoritmos
//UNICID - 2º Semestre - Noturno D
//Aluno: Matheus David de Carvalho
//RGM: 28921399

int main(){

    //Variaveis que armazenam valores inteiros
    int N,a,b,c,d,e,f,g,h,i,j,k,l;
    //Impreime na tela pergunta ao usuário o valor a digitar
    printf("Digite um valor: \n");
    //Leia na tela o valor digitado em inteiro
    scanf("%d",&N);

    //Variavel que divide por um milhão
    a = N / 1000000;
    //Variavel que divide retorna o resto de um milhão
    b = N % 1000000;

    //Variavel que divide a ultima variavel pelo resto e armazena o valor por 100 mil 
    c = b / 100000;
    //Variavel que divide retorna o resto de cem mil
    d = b % 100000;

    //Variavel que divide variavel pelo resto e armazena o valor por mil
    e = d / 1000;
    //Variavel que divide retorna o resto de mil
    f = d % 1000;

    //Variavel que divide variavel pelo resto e armazena o valor por cem
    g = f / 100;
    //Variavel que divide retorna o resto de cem
    h = f % 100;

    //Variavel que divide variavel pelo resto e armazena o valor por dez
    i = h / 10;
    //Variavel que divide retorna o resto de dez
    j = h % 10;

    //Variavel que divide variavel pelo resto e armazena o valor por um
    k = j / 1;
    //Variavel que divide retorna o resto de um
    l = j % 1;

    //Imprime na tela em algarismo o valor de cada casa em um milhao
    printf("Valor de Milhões: %d \n",a);
    //Imprime na tela em algarismo o valor de cada casa a cem mil
    printf("Valor de Centena de Milhares: %d \n",c);
    //Imprime na tela em algarismo o valor de cada casa a mil
    printf("Valor de Milha: %d \n",e);
    //Imprime na tela em algarismo o valor de cada casa a cem
    printf("Valor de Centena: %d \n",g);
    //Imprime na tela em algarismo o valor de cada casa a dezena
    printf("Valor de Dezena: %d \n",i);
    //Imprime na tela em algarismo o valor de cada casa a unidade
    printf("Valor de Unidade: %d \n",k);


    return 0;
}