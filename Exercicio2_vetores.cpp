#include <stdio.h>
#include <locale.h>

/*Desenvolva um programa que preencha dois vetores inteiros com 8 elementos cada
(interpretados como dois números inteiros), os valores inseridos nos vetores devem ser 
entre 0 e 9. Após a inserção dos valores realize o cálculo da sequência de números que
representa a soma dos dois inteiros. Exemplo:*/


int main ()


{
	setlocale (LC_ALL, "Portuguese");
	int vet1 [7], vet2[7], vet3[7], aux, qo, soma;
	
	
	for (aux = 0; aux < 8; aux ++)
	{
		printf ("Digite um número para o primeiro vetor: ");
		scanf ("%d", &vet1[aux]);		
	}
	
	for (aux = 0; aux < 8; aux ++)
	{
		printf ("Digite um número para o segundo vetor: ");
		scanf ("%d", &vet2[aux]);		
	}
	
	soma=0;
	for (aux=7; aux>=0; aux--)
	{
		qo=(vet1[aux]+vet2[aux]+soma)/10;		
		vet3[aux]= (vet1[aux]+vet2[aux]+soma)%10;
		soma=qo;
	}
	
	for  (aux=0; aux < 8; aux++)
	{
		printf ("%d", vet1[aux]);			
	}
	printf ("\n");
	
	for  (aux=0; aux<8; aux++)
	{
		printf ("%d", vet2[aux]);		
	}
	printf ("\n");
	printf ("_____________________\n");
	printf ("%d", soma);
	
	for  (aux=0; aux<8; aux++)
	{
		printf ("%d", vet3[aux]);	
	}	
}

	


