#include <stdio.h>
//Tecninca e Desenvolvimento de Algoritmos
//UNICID - 2º Semestre - Noturno D
//Aluno: Matheus David de Carvalho
//RGM: 28921399

int main(){
    //Valor inteiro de que atribuido a variavel
    int valor;
    //Loop com valor 3 que percorre 3 a 100 sendo que incremento demonstra os multiplos de 3
    for (valor = 3; valor <= 100; valor +=3)
    {
        // Imprime na tela valor dos multiplos de 3
        printf("%d \n",valor);
    }
    
 return 0;   
}