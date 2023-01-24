#include <stdio.h>
//Tecninca e Desenvolvimento de Algoritmos
//UNICID - 2º Semestre - Noturno D
//Aluno: Matheus David de Carvalho
//RGM: 28921399

int main(){

    //Variavel que armazena valor de casa decimal
    float salario, aliquota, impostoDevido;
    //Imprime na tela a pergunta sobre o salário
    printf("Digite o salário R$: \n"); 
    //Leia na tela o valor da varial de casa decimal
    scanf("%f",&salario,"\n");
    
    //Imprime na tela o salário atual da pessoa
    printf("Seu salário Atual é: %.2f \n",salario);
    //Comando de decisão IF caso o valor seja menor que 190398 faça..
    if(salario <=  1903.98){
        //Imprime o Insento na tela
        printf("Insento da faixa de R$ 1.903,98 reais\n");
        //Imprime a aliquota que é em porcentagem
        printf("Alíquota é de 7,5% -> \n");
        //Imprime o valor da parcela a reduzir
        printf("Parcela a reduzir R$ 142,80 -> \n");
        // Variavel que calcula aliquota
        aliquota = salario * 0.07;
        //Variavel que calcula aliquota subtraida da parcela
        impostoDevido = aliquota - 142.80;
        //Imprime o imposto devido
        printf("Imposto Devido é R$: %.2f\n",impostoDevido);
        //Imprime o salário final
        printf("Salário final: R$: %.2f\n",salario - impostoDevido);
        //Condição ELSE IF(SE NÃO SE) dando mais de uma condição e retornando condição verdadeira entre 190398 a 282665
    }else if (salario >= 1903.98 && salario <= 2826.65)
    {   
        //Imprime o Insento na tela
        printf("Insento da faixa de R$ 1.903,98 a R$ 2.826,65 reais\n");
        //Imprime a aliquota que é em porcentagem
        printf("Alíquota é de 15% -> \n");
        //Imprime o valor da parcela a reduzir
        printf("Parcela a reduzir R$ 354,80\n");
        //Variavel que calcula aliquota
        aliquota = salario * 0.15;
        //Variavel que calcula aliquota subtraida da parcela
        impostoDevido = aliquota - 354.80;
        //Imprime o imposto devido
        printf("Imposto Devido é R$: %.2f\n",impostoDevido);
        //Imprime o salário final
        printf("Salário final: R$: %.2f\n",salario - impostoDevido);
        //Condição ELSE IF(SE NÃO SE) dando mais de uma condição e retornando condição verdadeira entre 282666 a 375105
    }else if (salario >= 2826.66 && salario <= 3751.05)
    {   
        //Imprime o Insento na tela
        printf("Insento da faixa de R$ 2.826,66 a R$ 3.751,05 reais\n");
        //Imprime a aliquota que é em porcentagem
        printf("Alíquota é de 22,5%-> \n");
        //Imprime o valor da parcela a reduzir
        printf("Parcela a reduzir R$ 638,13-> \n");
        //Variavel que calcula aliquota
        aliquota = salario * 0.225;
        //Variavel que calcula aliquota subtraida da parcela
        impostoDevido = aliquota - 638.13;
        //Imprime o imposto devido
        printf("Imposto Devido é R$: %.2f\n",impostoDevido);
        //Imprime o salário final
        printf("Salário final: R$: %.2f\n",salario - impostoDevido);
        //Condição ELSE IF(SE NÃO SE) dando mais de uma condição e retornando condição verdadeira entre 375106 a 466468
    }else if (salario >= 3751.06 && salario <= 4664.68)
    {
        //Imprime o Insento na tela
        printf("Insento da faixa de R$ 3.751,06 a R$ 4.664,68 reais \n");
        //Imprime a aliquota que é em porcentagem
        printf("Alíquota é de 27,5% -> \n");
        //Imprime o valor da parcela a reduzir
        printf("Parcela a reduzir R$ 636,13 -> \n");
        //Variavel que calcula aliquota
        aliquota = salario * 0.275;
        //Variavel que calcula aliquota subtraida da parcela
        impostoDevido = aliquota - 636.13;
        //Imprime o imposto devido
        printf("Imposto Devido é R$: %.2f\n",impostoDevido);
        //Imprime o salário final
        printf("Salário final: R$: %.2f\n",salario - impostoDevido);
        //Condição ELSE IF(SE NÃO SE) dando mais de uma condição e retornando condição verdadeira acima 466469
    }else if (salario >= 4664.69)
    {
        //Imprime o Insento na tela
        printf("Insento da faixa de R$ 4.664,69 reais");
        //Imprime o valor da parcela a reduzir
        printf("Alíquota é de R$189,59");
        //Variavel que calcula aliquota
        aliquota = salario - 189.59;
        //Imprime o imposto devido
        printf("Imposto Devido é R$: %.2f\n",impostoDevido);
         //Imprime o salário final
        printf("Salário final: R$: %.2f\n",salario - impostoDevido);
    }
    



    return 0;
}