#include <stdio.h>
#include <stdlib.h>
//Tecnicas de desenvolvimento de algortmos
//Instituição: UNICID
//Turma e Periodo: D - Noturno 2º Semestre
//Aluno: Matheus David de Carvalho
//RGM:28921399
int main(){
	

	float celsius,kelvin, farhenheit,media,mediaC,mediaF,mediaK;
	
	
	for(int i=0; i<= 10;i++){
		
	printf("Digite o valor de graus Cº: \n");
	scanf("%g",&celsius);
	printf("\n");
	printf("O valor me CELSIUS: %g\n",celsius);
	mediaC += celsius;
	printf("\n");
	farhenheit = celsius * 1.8 + 32;
	printf("O valor em FAHRENHEITº: %g\n",farhenheit);
	mediaF += farhenheit;
	printf("\n");
	kelvin = celsius + 273.15;
	printf("O valor em KELVINº: %g\n",kelvin);
	mediaK += kelvin;
	printf("\n");
	printf("");
	
	
	}
	printf("%g\n",mediaC);
	printf("\n");
	printf("%g\n",mediaF);
	printf("\n");
	printf("%g\n",mediaK);
	printf("\n");
	
	media = mediaK + mediaF + mediaC /10;
	
	printf("A média dos valores: %g",media);
	
	return 0;
}



