#include <stdio.h>
#include <locale.h>
/*Desenvolva um programa que preencha um vetor de 10 inteiros, e após o 
preenchimento apresente os números que são divisíveis por 3 e 7, assim como o 
resultado da soma destes valores sem repetição.*/

int main ()


{
	setlocale (LC_ALL, "Portuguese");
	int vetor[9], aux, soma;
	
	for (aux=0; aux < 10; aux++)
	{
		printf ("Digite um número: ");
		scanf ("%d", &vetor[aux]);	
    }
    
	for (aux=0; aux < 10; aux++)
	{
		if (vetor[aux]%3 == 0)
		{
			printf ("Divisíveis por 3 = %d\n", vetor[aux]);
		}
		else
		{
			if (vetor[aux]%7 == 0)
			{
				printf("Divisíveis por 7 = %d\n", vetor[aux]);
			}
		}	
	}
	
	for (aux=0; aux < 10; aux++)
	{
		if (vetor[aux]%3 == 0 && vetor[aux]%7 == 0)
		{
			soma = soma + vetor[aux];
		}	
	}
	printf ("Soma= %d", soma);
}

