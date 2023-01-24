//Tecnicas de Desenvolvimento de Algoritmos
//Linguagem C
//Instituição: UNICID
//Curso: Análise de Desenvolvimento de Sistemas
//Periodo e Turma: Noturno -D (terça-feira)
//Aluno: Matheus David - 28921399
//Aluno: Marcelo Marchezini - 30311420
//Aluno: Cauan Felipe - 300335995


#include <stdio.h>
#include <stdlib.h>


//Variaveis com valores de discos
int A[8];
int B[8];
int C[8];

//Variaveis com posição inicial dos discos
int posA = 0;
int posB = 0;
int posC = 0;

//Funcao colocar DiscoA
void pushA(int n){
	
	A[posA] = n;
	posA++;
}
//Funcao de tirar DiscoA
int popA(){
	
	posA--;
	return A[posA];
	
}
//Funcao retornar DiscoA
int peekA(){
	
	
	return A[posA-1];
	
}
//Funcao colocar DiscoB
int pushB(int n){
	
	B[posB] = n;
	posB++;
}

//Funcao retornar DiscoB
int peekB(){
	
	return B[posB-1];
}
//Funcao de tirar DiscoB
int popB(){
	
	posB--;
	return B[posB];
}

//Funcao colocar DiscoC
int pushC(int n){
	
	C[posC] = n;
	posC++;
}
//Funcao retornar DiscoC
int peekC(){
	
	return C[posC-1];
}
//Funcao de tirar o DiscoC
int popC(){
	
	posC--;
	return C[posC];
}


//Mostra o conteudo das pilhas A B e C.
void show(){
	int i;
	printf("\nA: ");
	for(i = 0; i <  posA ; i++){
		printf("%d",A[i]);
	}
	printf("\n");
	
	printf("\nB: ");
	for(i = 0; i <  posB ; i++){
		printf("%d",B[i]);
	}
	printf("\n");
	
	printf("\nC: ");
	for(i = 0; i <  posC ; i++){
		printf("%d",C[i]);
	}
	printf("\n\n");
}
//Loop de repetição para começar o movimento
void start(){
	
	int i;
	
	for(i = 8; i >= 1; i--){
		pushA(i);
	}
	
}
//Movimento de A - B
void moveAB(){
	
	if(posA == 0){
		
		pushA(popB());
		
	}else if(posB == 0){
		
		pushB(popA());
		
	}else if(peekA()< peekB()){
		
		pushB(popA());
		
	}else if(peekB()< peekA()){
		
		pushA(popB());
	}
}
//Movimento de A - C
void moveAC(){
		if(posA == 0){
		pushA(popC());
		
	}else if(posC == 0){
		
		pushC(popA());
		
	}else if(peekB() < peekA()){
		
		pushC(popA());
		
	}else if(peekC()< peekA()){
		
		pushA(popC());
	}
	
}
//Movimento B -C
void moveBC(){
	if(posC == 0){
		
		pushA(popB());
		
	}else if(posB == 0){
		
		pushB(popC());
		
	}else if(peekB() < peekC()){
		
		pushB(popA());
		
	}else if(peekC() < peekB()){
		
		pushA(popB());
	}
}
//Função principal que tem como callback de puxar outras
int main(int argc, char *argv[]){
	
	start();
	show();
	
	//Laço de repetição Enquanto for menor ou maior ou igual a algo faça mostrando com show();
	while(posC < 8){
		moveAB();
		show();
		if (posC == 8)
		break;
		moveAC();
		show();
		if (posC == 8)
		break;
		moveBC();
		show();
			
	}
	show();

	
	return 0;
}
