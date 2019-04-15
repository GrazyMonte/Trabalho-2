#pragma once

//Funções para vetores
void preencher(int vetor[], int quant);
void exibir(int vetor[], int quant);
int n_maior(int vetor[]);
int n_menor(int vetor[]);
void n_impar(int vetor[]);
void n_primo(int vetor[]);
void encontrar(int vetor[]);
void valor_diferente(int vetor[]);

//Funções para matrizes
void preencher_m(int matriz[10][10], int quant1, int quant2);
void exibir_m(int matriz[10][10], int quant1, int quant2);
void multiplicar_2(int matriz[10][10], int quant1, int quant2);
int soma_elemento(int matriz[10][10], int quant1, int quant2);
void imprimir_diagonal(int matriz[10][10], int quant1, int quant2);
void imprimir_exceto_diagonal(int matriz[10][10], int quant1, int quant2);
void nota_alunos(int matriz[10][10], int quant1, int quant2);
void menor_nota(int matriz[10][10], int quant1, int quant2);
void matriz_equacao(int matriz[10][10], int quant1, int quant2);
void soma_colunas(int matriz[10][10], int quant1, int quant2);