#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <queue>
#include <cstdlib>

/*
Um hospital de cardiologia precisa de um sistema para efetuar o cadastro de pacientes que
necessitam de doa��o de cora��o. Para cada paciente que � inclu�do no sistema deve ser
informado o nome, telefone e o grau de urg�ncia para transplante. O grau de urg�ncia � definido
na seguinte escala: (5) Muito urgente; (4) Urgente; (3) M�dio; (2) Pouco urgente; (1) Sem
urg�ncia. Sempre que � o hospital recebe um novo cora��o o sistema � consultado para obter o
pr�ximo paciente que dever� ser operado. O sistema informa o nome e o telefone do paciente.
Tamb�m a qualquer momento � poss�vel visualizar o tamanho da fila de espera. Observa��o: os
dados n�o precisam ser persistidos em arquivos, podem ficar armazenados somente na mem�ria.
Se desejar que o arquivo seja salvo use o procedimento de arquivos aleat�rios.
*/

struct Pacientes{
	char nome[50];
	char telefone[10];
	char grau_Urgencia[1];
};

using namespace std;

char pf5[] = "5";
char pf4[] = "4";
char pf3[] = "3";
char pf2[] = "2";
char pf1[] = "1";

int main()
{
	struct Pacientes pa[100];
	
	queue<string> pacientes;
	char auxi[10];
	int per, controle = 0;
	while( per != 5 ){
	printf("oque deseja fazer?\n");
	printf("0 - Cadastrar Pacientes\n");
	printf("1 - Consultar fila\n");
	printf("2 - Adicionar cora��o ao hospital\n\n");
	printf("5 - Sair\n");
	scanf("%d", &per);
	
	system("cls");
	
	while(per == 0){
		printf("Digite o nome do paciente a ser adicionado na lista de espera:\n");
		scanf("%s", &pa[controle].nome);
		fflush(stdin);
		
		printf("Digite o telefone do paciente:\n");
		scanf("%s", &pa[controle].telefone);
		fflush(stdin);
		
		printf("\nDigite o grau de dificulade do paciente\n\n(1) - Sem urgencia\n(2) - Pouco Urgente\n(3) - Medio\n(4) - Urgente\n(5) - Muito urgente\n");
		scanf("%s", &pa[controle].grau_Urgencia);
		fflush(stdin);
			
		printf("Deseja continuar cadastrando pacientes?\n 0 - Sim 9 - Nao\n");
		scanf("%d", &per);
		fflush(stdin);
		
		pacientes.push(pa[controle].nome);
		pacientes.push(pa[controle].telefone);
		pacientes.push(pa[controle].grau_Urgencia);
		
		system("cls");
		controle++;
	}
	
	while(per == 1){
		
		int perGrau = 0;
		system("cls");
		printf("Deseja consultar a fila por\n1 - Grau de Urgencia\n2 - Mostrar todos\n");
		scanf("%d", &perGrau);
		
		while( perGrau == 1){
			
			char per[5];
			
			printf("Digite o grau que deseja consultar:\n");
			scanf("%s", &per);
			
			for(int cont = 0; cont < controle; cont++){
				if( strcmp(per, pa[cont].grau_Urgencia) == 0){
					printf("\nNome: %s", pa[cont].nome);
					printf("\nTelefone: %s", pa[cont].telefone);
					printf("\nGrau de Urgencia: %s", pa[cont].grau_Urgencia);
				}
			
			}
			printf("\nDeseja pesquisar novamente?\n1 - Sim 9 - Nao\n");
			scanf("%d", &perGrau);
			
		}
		
		while( perGrau == 2){
				system("cls");
		for(int c = 0; perGrau == 2 && c < controle; c++){
			for(int cont = 0; cont < controle; cont++){
				printf("\nNome: %s", pa[cont].nome);
				printf("\nTelefone: %s", pa[cont].telefone);
				printf("\nGrau de Urgencia: %s",  pa[cont].grau_Urgencia);
				printf("\n\n");
			}
		
			printf("Deseja mostrar novamente? 2 - Sim 0 - Nao\n");
			scanf("%d", &perGrau);
		
		}
	}
		printf("\nDeseja consultar novamente? 1 - Sim 9 - Nao\n");
		scanf("%d", &per);
	}
	
	while( per == 2){
		
		int coracao = 0, posicao = 0;
		system("cls");
		printf("\nDeseja adicionar um cora��o ao hospital? 1 - Sim 0 - Nao\n");
		scanf("%d", &coracao);		
		
		int a; 
		
		for(a = 0; a < controle; a++){
			if( strcmp(pa[a].grau_Urgencia, pf5) == 0 && a != 99){
				posicao = a;
				a = 99;
			}
			else if( strcmp(pa[a].grau_Urgencia, pf4) == 0 && a != 99){
				posicao = a;
				a = 99;
			}
			else if( strcmp(pa[a].grau_Urgencia, pf3) == 0 && a != 99){
				posicao = a;
				a = 99;
			}
			else if( strcmp(pa[a].grau_Urgencia, pf2) == 0 && a != 99){
				posicao = a;
				a = 99;
			}
			else if( strcmp(pa[a].grau_Urgencia, pf1) == 0 && a != 99){
				posicao = a;
				a = 99;
			}
		}
		
		char atendido[] = "Atendido";
		
		switch(posicao){
			case 5:
				printf("Ligar para %s no telefone: %d", pa[posicao].nome, pa[posicao].telefone, "\n");
				strcpy (pa[posicao].nome, atendido);
				strcpy(pa[posicao].telefone,"0000");
				strcpy(pa[posicao].grau_Urgencia,"0");
				a = 0;
				break;
			case 4:
				printf("Ligar para %s no telefone: %d", pa[posicao].nome, pa[posicao].telefone, "\n");
				strcpy (pa[posicao].nome, atendido);
				strcpy(pa[posicao].telefone,"0000");
				strcpy(pa[posicao].grau_Urgencia,"0");
				a = 0;
				break;
			case 3:
				printf("Ligar para %s no telefone: %d", pa[posicao].nome, pa[posicao].telefone, "\n");
				strcpy (pa[posicao].nome, atendido);
				strcpy(pa[posicao].telefone,"0000");
				strcpy(pa[posicao].grau_Urgencia,"0");
				a = 0;
				break;
			case 2:
				printf("Ligar para %s no telefone: %d", pa[posicao].nome, pa[posicao].telefone, "\n");
				strcpy (pa[posicao].nome, atendido);
				strcpy(pa[posicao].telefone,"0000");
				strcpy(pa[posicao].grau_Urgencia,"0");
				a = 0;
				break;
			case 1:
				printf("Ligar para %s no telefone: %d", pa[posicao].nome, pa[posicao].telefone, "\n");
				strcpy (pa[posicao].nome, atendido);
				strcpy(pa[posicao].telefone,"0000");
				strcpy(pa[posicao].grau_Urgencia,"0");
				a = 0;
				break;
			default:
				printf("Nao tem ninguem na fila de espera");
				break;
	}/*
		if( posicao == 5) printf("Ligar para %s", pa[posicao].nome, " no telefone: %d", pa[posicao].telefone);
		if( posicao == 4) printf("Ligar para %s", pa[posicao].nome, " no telefone: %d", pa[posicao].telefone);
		if( posicao == 3) printf("Ligar para %s", pa[posicao].nome, " no telefone: %d", pa[posicao].telefone);
		if( posicao == 2) printf("Ligar para %s", pa[posicao].nome, " no telefone: %d", pa[posicao].telefone);
		if( posicao == 1) printf("Ligar para %s", pa[posicao].nome, " no telefone: %d", pa[posicao].telefone);
		*/
		printf("\nDeseja adicionar mais cora��es?:\n");
		printf("2 - Sim 9 - Nao");
		scanf("%d", &per);
			
	}
}
}

/*

aux = controle;

for(int a = 0; a < aux; a++){
	for(int a1 = 0; a1 < aux; a1++){
		for(int a2 = 0; a2 < aux; a2++){
			for( int a3 = 0; a3 < aux; a3++){
				for( int a4 = 0; a4< aux; a4++){
					if( pa[a4].grau_Urgencia == 5){
						posicao = a4;
						aux = 0;
					}
				}
			}
		}
	}
}
*/


















