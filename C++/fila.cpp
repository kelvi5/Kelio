#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iostream>
typedef struct _fila
{
   int dados;
   struct _fila *prox;
} fila;

struct Pacientes{
	char nome[50];
	int telefone;
	int grau_Urgencia;
};


void enqueue(int valor, fila **inicio, fila **final)
{
   fila *aux;
	
	switch(valor){
		case 5:
		    aux = (fila *) malloc(sizeof (fila));
      		aux->dados = valor;
       		aux->prox = NULL;
      		(*inicio)->prox = aux;
       		(*final) = aux;
		   break;
		/*case 4:
			aux = (fila *) malloc(sizeof (fila));
       		aux->dados = valor;
		    aux->prox = NULL;
       		(*final)->prox = aux;
       		(*final) = aux;
       		break;
       		
       	case 3:
			aux = (fila *) malloc(sizeof (fila));
       		aux->dados = valor;
		    aux->prox = NULL;
       		(*final)->prox = aux;
       		(*final) = aux;
       		break;
       	case 2:
			aux = (fila *) malloc(sizeof (fila));
       		aux->dados = valor;
		    aux->prox = NULL;
       		(*final)->prox = aux;
       		(*final) = aux;	
       		break;
       	case 1:
			aux = (fila *) malloc(sizeof (fila));
       		aux->dados = valor;
		    aux->prox = NULL;
       		(*final)->prox = aux;
       		(*final) = aux;	
       		break;*/
	}
   }


int dequeue(fila **inicio, fila **final)
{
   fila *aux;
   int n = 0;

   if ((*inicio) == NULL && (*final) == NULL)
   {
       printf("A fila esta vazia");
   }
   else if ((*inicio) != (*final))
   {
       aux = (*inicio);
       n = (*inicio)->dados;
       (*inicio) = (*inicio)->prox;
       free(aux);
       return n;
   }
   else
   {
       aux = (*inicio);
       n = (*inicio)->dados;
       free(aux);
       (*inicio) = NULL;
       (*final) = NULL;
       return n;
   }
}

void list(fila *inicio)
{
	struct Pacientes pa[100];
	int a = 0;
   if (inicio == NULL)
   {
       printf("Lista Vazia");
   }
   else {
       while (inicio)
       {
           printf("\nNome: %s", pa[a].nome);
		   printf("\nTelefone: %d", pa[a].telefone);
		   printf("\nGrau de Urgencia: %d", inicio->dados);
           inicio = inicio->prox;
           a++;
       }
   }
}

int main(int argc, char** argv)
{
   fila *inicio = NULL;
   fila *final = NULL;
   int retorno, valor = 0;
   int acao = -1;
   int controle = 0;
   struct Pacientes pa[100];
	
   while (acao != 20)
   {
   	system("cls");
       printf("1 - Cadastrar Pacientes\n");
       printf("2 - Mostrar Fila\n");
       printf("3 - Adicionar coracao ao Hospital\n");
       printf("4 - Exit\n");
       printf("Digite a acao desejada: ");
       scanf("%d", &acao);

       while (acao == 1)
       {
           system("cls");
           
        printf("Digite o nome do paciente a ser adicionado na lista de espera:\n");
		scanf("%s", &pa[controle].nome);
		fflush(stdin);
		
		printf("Digite o telefone do paciente:\n");
		scanf("%d", &pa[controle].telefone);
		fflush(stdin);
		
		int kAux = 0;
		
		printf("\nDigite o grau de dificulade do paciente\n\n(1) - Sem urgencia\n(2) - Pouco Urgente\n(3) - Medio\n(4) - Urgente\n(5) - Muito urgente\n");
		scanf("%d", &kAux);
		fflush(stdin);
		
		pa[controle].grau_Urgencia = kAux;
		
        enqueue(kAux, &inicio, &final);
        system("cls");
        
        controle++;
        printf("Deseja continuar cadastrando pacientes?\n 1 - Sim 0 - Nao\n");
		scanf("%d", &acao);
		fflush(stdin);
       
	   }
		if (acao == 2)
       {
       	int perGrau = 1;
       	system("cls");
        if(controle <= 0){
					perGrau = 0;
					printf("Lista vazia");
				}
			for(int cont = 0; cont < controle && perGrau != 0; cont++){
				printf("\nNome: %s", pa[cont].nome);
				printf("\nTelefone: %s", pa[cont].telefone);
				printf("\nGrau de Urgencia: %s",  pa[cont].grau_Urgencia);
				printf("\n\n");
			}
			getch();
       }
        else if (acao == 3)
       {
           system("cls");
           retorno = dequeue(&inicio, &final);
           fflush(stdin);
           if (retorno != NULL)
           {
           		fflush(stdin);
               printf("O Paciente %s foi atendido \n\n", pa[retorno].nome);
           }
           else printf("Lista vazia");
           getch();

       }
        else if (acao == 4)
       {
           acao = 20;
       }
   }


}

