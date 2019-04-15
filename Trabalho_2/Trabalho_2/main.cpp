#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "vetor_matriz.h"

int vetor1[10], matriz[10][10];

int main()
{
	int opcao, i, j, a, aux, liga = 1;
	
	while (liga == 1)
	{
		system("cls");
		printf("Fun%c%ces relativas as quest%ces do trabalho 2 de Programa%c%co Avan%cada\n\n", 135, 228, 228, 135, 198, 135);
		printf("1 - Quest%co 1 a 4 \t2 - Quest%co 5\t\t3 - Quest%co 6\n", 198, 198, 198); //Quest�es de vetores
		printf("4 - Quest%co 7 \t\t5 - Quest%co 8 \t\t6 - Quest%co 9\n", 198, 198, 198); //Quest�es de matriz
		printf("7 - Quest%co 10 \t\t8 - Quest%co 11 \t\t9 - Quest%co 12\n", 198, 198, 198);
		printf("10 - Quest%co 13 \t11 - Quest%co 14", 198, 198);
		printf("\n\nSelecione a op%c%co desejada: ", 135, 198);
		scanf_s("%d", &opcao);

		switch (opcao)
		{
		case 1:
		{
			int maior, menor, dif;
			//Fun��o para entrar com 10 valores
			preencher(vetor1, 10);

			//Fun��o para o maior n�mero
			maior = n_maior(vetor1);

			//Fun��o para o menor n�mero
			menor = n_menor(vetor1);

			//Fun��o para achar n�meros impares
			n_impar(vetor1);

			//Fun��o para descobrir n�meros primos
			n_primo(vetor1);

			dif = maior - menor;
			printf("\n\nMaior valor: %d \nMenor valor: %d \nDiferen%ca entre eles: %d \n", maior, menor, 135, dif);
		}
		break;
		case 2:
		{
			//Fun��o para entrar com 8 valores
			preencher(vetor1, 8);

			//Fun��o para encontrar um n�mero no vetor
			encontrar(vetor1);
		}
		break;
		case 3:
		{
			//Fun��o para entrar com 10 valores diferentes
			valor_diferente(vetor1);

			//Fun��o para exibir o vetor
			exibir(vetor1, 10);
		}
		break;
		case 4:
		{
			//Fun��o para preencher uma matriz 3x3
			preencher_m(matriz, 3, 3);

			//Fun��o para exibir uma matriz 3x3
			exibir_m(matriz, 3, 3);
		}
		break;
		case 5:
		{
			//Fun��o para preencher uma matriz 3x3
			preencher_m(matriz, 3, 3);

			//Fun��o para multiplicar a matriz por 2
			multiplicar_2(matriz, 3, 3);
		}
		break;
		case 6:
		{
			int soma;
			//Fun��o para preencher uma matriz 2x3
			preencher_m(matriz, 2, 3);
			
			//Fun��o para somar os elementos da matriz
			soma = soma_elemento(matriz, 2, 3);
			printf("A soma dos elementos da matriz %c: %d", 130, soma);
		}
		break;
		case 7:
		{
			//Fun��o para preencher uma matriz 4x4
			preencher_m(matriz, 4, 4);

			//Fun��o para imprimir os valores da diagonal principal
			imprimir_diagonal(matriz, 4, 4);
		}
		break;
		case 8:
		{
			//Fun��o para preencher uma matriz 3x3
			preencher_m(matriz, 3, 3);

			//Fun��o para imprimir todos os valores da matriz, exceto a diagonal principal
			imprimir_exceto_diagonal(matriz, 3, 3);
		}
		break;
		case 9:
		{
			//Fun��o para ler as notas dos alunos
			nota_alunos(matriz, 10, 3);

			//Fun��o para calcular quantos obtiveram a menor nota em cada prova
			menor_nota(matriz, 10, 3);
		}
		break;
		case 10:
		{
			//Fun��o que calcula a matriz 10x10 segundo as equa��es de par�metro
			matriz_equacao(matriz, 10, 10);

			//Fun��o para exibir a matriz 10x10
			exibir_m(matriz, 10, 10);
		}
		break;
		case 11:
		{
			//Fun��o para preencher uma matriz 3x3
			preencher_m(matriz, 3, 3);

			//Fun��o que soma os elementos de uma mesma coluna
			soma_colunas(matriz, 3, 3);
		}
		break;
		default:
			printf("Valor digitado n%co corresponde a nenhuma alternativa", 198);
			break;
		}
		printf("\n\nDeseja realizar outra opera%c%co?\n1 - Sim \t2 - N%co\n", 135, 198, 198);
		scanf_s("%d", &liga);
	}
	system("pause");
	return 0;
}