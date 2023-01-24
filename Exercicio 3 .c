#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

//Tecnicas e Desenvolvimento de Algoritmos
//Instituição: UNICID
//Periodo e Turma:Noturno D - 2º Semestre
//Aluno: Matheus David de Carvalho - 28921399
//Aluno: Marcelo Marchezini - 30311420

//Função para numero inteiro
int main(){
	
	//Armazena variavel de cada voto e total delas em tipo inteiro
	int v=7,c1=0,c2=0,c3=0,c4=0,vn=0,vb=0,total;
	//Armaenza variavel de cada voto tipo float
	float p1,p2,p3,p4,pn,pb,totalp;
	
	//Impressões na tela
	printf(":::::::::::::::::::\n");
	printf(":::Eleições 2022:::\n");
	printf(":::::::::::::::::::\n");
	printf("\n");
	
	//Laço de repetição enquanto... sendo que demonstra que enquanto for diferente de 0 cotinue
	//So para ao digitar 0
	while(v != 0){
		printf(":::Candidatos:::\n");
		//Impre o nome do candidado
		printf(":::1 -Candidato nº1 - João Ferreira: \n");
		printf("\n");
		//Impre o nome do candidado
		printf(":::2 -Candidato nº2 - Alex dos Reis: \n");
		printf("\n");
		//Impre o nome do candidado
		printf(":::3 -Candidato nº3 - Ana Cristina: \n");
		printf("\n");
		//Impre o nome do candidado
		printf(":::4 -Candidato nº4 - Rodinei Souza: \n");
		printf("\n");
		//Impre o voto em branco
		printf(":::5 -Voto em Branco: \n");
		printf("\n");
		//Impre o voto nulo
		printf(":::6 -Votono Nulo: \n");
		printf(":::::::::::::::::::\n");
		printf("::VOTO!::\n");
		printf(":::::::::::::::::::\n");
		//Pede que usurio digite na tela e imprive variavel
		scanf("%d",&v);
		
		//Comando de escolha, atráves de um parametro ele utiliza escolhas para determinar qual deles imprimir
		switch(v){
			case 0:
				//Imprime fim da votação
				printf("Votação Encerrada!");
				break;
			case 1:
				c1++;
				//Imprime voto no candidado 1
				printf("VOTO REGISTRADO -Candidato nº1 - João Ferreira");
				break;
			case 2:
				c2++;
				//Imprime voto no candidado 2
				printf("VOTO REGISTRADO -Candidato nº2 - Alex dos Reis");
				break;
			case 3:
				c3++;
				//Imprime voto no candidado 3
				printf("VOTO REGISTRADO -Candidato nº3 - Ana Cristina");
				break;
			case 4:
				c4++;
				//Imprime voto no candidado 4
				printf("VOTO REGISTRADO -Candidato nº4 - Rodinei Souza");
				break;
			case 5:
				vn++;
				//Imprime voto nulo
				printf("VOTO REGISTRADO -VOTO Nulo!");
				break;
			case 6:
				vb++;
				//Imprime voto em branco
				printf("VOTO REGISTRADO -VOTO em Branco");
				break;	
			default:
				//Imprime que opção invalido
				printf("OPÇÃO INVALIDA!");
				break;
		}
				
	}	
	
		//Imprime os resultados dos votos de forma formatada
		printf("RESULTADOS: \n João Ferreira\t %d\n Alex dos Reis\t %d\n Ana Cristina\t %d\n Rodinei Souza\t %d\n  VOTO Nulo!\t %d\n VOTO em Branco\t %d\n",c1,c2,c3,c4,vn,vb);
		
		//Variavel que soma total de votos obtidos 
		total = c1 + c2 + c3 + c4 + vn + vb;
				//Variavel que imprime total em porcentagem
				totalp = total * 0.01;
		//Imprime o total de votos
		printf("TOTAL DE VOTOS!: %d\n",total);
		//Imprime o total em porcentagem formatado
		printf("Porcentagem de VOTOS!: %f\n",totalp);
		
				//Variavel que faz calculo de porcentagem de cada voto
		 		p1 = c1 * 100 / total;
		 		p2 = c2 * 100 / total;
		 		p3 = c3 * 100 / total;
				p4 = c4 * 100 / total;
		 		pn = vn * 100 / total;
		 		pb = vb * 100 / total;
		 	
	
		//Imprime porcentagem de cada voto dos candidatos
		printf("João Ferreia\t %f\n",p1);
		printf("Alex dos Reis\t %f\n",p2);
		printf("Ana Cristina\t %f\n",p3);
		printf("Rodinei Souza\t %f\n",p4);
		printf("Voto Nulo\t %f\n",pn);
		printf("Voto em Branco\t %f\n",pb);
		
		
		

getchar();
printf("\n\n");
system("pause");
return (0);
}
