#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
#include <istream>
#include<windows.h>
#include <stdlib.h>


	void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
/*int cadastro(char nomePro[100][100], char des[100][100], int Quan[100], int QuantMi[100], float precUn[100], int con, int CodProdu[100])
{
		int pergunta = 1;
		
		while(pergunta == 1)
		{
		con = 0;
		printf("Digite o nome do produto\n");
		scanf("%s", &nomePro[con]);
		fflush(stdin);
		while(nomePro[con] == '\0')
		{
			scanf("%s", nomePro[con]);
			if( nomePro[con] == '\0')
			{
				printf("Caracter Invalido digite um valido!!!\n");
				scanf("%s", &nomePro);
			}
		}
		printf("\nDigite a descricao do produto\n");
		scanf("%s", &des[con]);		
		while(des[con] == '\0')
		{
			scanf("%s", &des[con]);
			if(des[con] == '\0')
			printf("Descricao invalida\n\nDigite uma descricao valida");
			scanf("%s", &des[con]);
		}
		
		printf("Digite a quantidade do produto\n");
		scanf("%d",&Quan[con]);
		while (Quan[con] == 0)
		{
			scanf("%d",&Quan[con]);
			if( Quan[con] == 0 )
			{
				printf("A quantidade do produto nao pode ser zero\n Digite um valor valido\n");
				scanf("%d",&Quan[con]);
			}
		}
		
		printf("Digite a quantidade minima\n");
		scanf("%d",&QuantMi[con]);
		while ( QuantMi[con] == 0 )
		{
		scanf("%d",&QuantMi[con]);
		if( QuantMi[con] == 0)
		{
			printf("A quantidade minina nao pode ser zero\n Digite um valor valido\n");
			scanf("%d",&QuantMi[con]);
		}
		}
		
		printf("Digite o preco unitario\n");
		scanf("%d",&precUn[con]);
		
		printf("\nDeseja continuar cadastrando produto?\n\n 1- Sim ou 0- Nao\n");
		fflush(stdin);
		scanf("%d",&pergunta);
		
		CodProdu[ con ] = con;
		con++;
	}
}*/

/*void consulta(int conCons,char desCons[100][100], char nomeProdCons[100][100], int CodProdutCons[100])
{
	int perCons = 0;
	int perConsul = 1;
	while ( perConsul == 1)
	{
		printf("você deseja pesquisar pelo \n1-nome, \n2-codigo da mercadoria ou \n3-descrição?\n");
		scanf("%d", &perCons);
		
		int cont2 = 0;
		char pergunta2[30];
		int codigo2 = 0;
		char desc2 [100];
		
		switch(perCons)
		{
			case 1:
				printf("Digite o nome do produto\n");
				scanf("%s", &pergunta2);
				for(int i = 0; i < conCons; i++)
				{
					if (strcmp (pergunta2, nomeProdCons[i]) == 0)
					{
						printf("%s\n", nomeProdCons[i]);
					}
				}
				break;
			case 2:
				printf("Digite o Codigo do Produto\n");
				scanf("%d", &codigo2);
				for(int i = 0; i < conCons; i++)
				{
					if(codigo2 == CodProdutCons[i] )
					{
						printf("%d\n", CodProdutCons[i]);
					}
				}
				break;
			case 3:
				printf("Digite a descricao do produto\n");
				scanf("%s", &desc2);
				for(int i = 0; i < conCons; i++)
				{
					if(strcmp(desc2, desCons[i]) == 0)
					{
						printf("%s\n", desCons[i]);
					}
				}
				break;
			default:
				printf("Opção invalida");
				break;
			
			}
			
		printf("Deseja continuar consultando?\n\n 1-Sim 2-Nao\n\n");
		scanf("%d", &perConsul);	
	}
	
}*/

main()
{
	int menu, CodProdut[100], Quant[100], QuantMin[100], cont, pergunta;
	float precUni[100], precTot[100];
	char  desc[100][100], nomeProd[100][100];
	
	
	menu = 1;
	cont = 1;
	
	while( menu != 0 )
	{
		printf("Bem vindo!!\nSelecione a opcao desejada\n");
		printf("1- Cadastro\n");
		printf("2- Consulta\n");
		printf("3- Alteracao\n");
		printf("4- Exclusao\n");
		printf("5- Relatorio\n");
		printf("0- Fim\n");
		scanf("%d", &menu);
	
	while( menu < 0 || menu > 5)
	{
		printf("\n\n!!! Digite um Valor valido !!!\n\n");
		printf("Bem vindo!!\nSelecione a opcao desejada\n");
		printf("1- Cadastro\n");
		printf("2- Consulta\n");
		printf("3- Alteracao\n");
		printf("4- Exclusao\n");
		printf("5- Relatorio\n");
		printf("0- Fim\n");
		scanf("%d", &menu);
	}
		
	
	while(menu == 1)
	{
	
		

		
		printf("Digite o nome do produto\n");
		scanf("%s", &nomeProd[cont]);
		fflush(stdin);
		while(nomeProd[cont] == '\0')
		{
			scanf("%s", nomeProd[cont]);
			if( nomeProd[cont] == '\0')
			{
				printf("Caracter Invalido digite um valido!!!\n");
				scanf("%s", &nomeProd[cont]);
			}
		}
		printf("\nDigite a descricao do produto\n");
		scanf("%s", &desc[cont]);		
		while(desc[cont] == '\0')
		{
			scanf("%s", &desc[cont]);
			if(desc[cont] == '\0')
			printf("Descricao invalida\n\nDigite uma descricao valida");
			scanf("%s", &desc[cont]);
		}
		
		printf("Digite a quantidade do produto\n");
		scanf("%d",&Quant[cont]);
		while (Quant[cont] == 0)
		{
			scanf("%d",&Quant[cont]);
			if( Quant[cont] == 0 )
			{
				printf("A quantidade do produto nao pode ser zero\n Digite um valor valido\n");
				scanf("%d",&Quant[cont]);
			}
		}
		
		printf("Digite a quantidade minima\n");
		scanf("%d",&QuantMin[cont]);
		while ( QuantMin[cont] == 0 )
		{
		scanf("%d",&QuantMin[cont]);
		if( QuantMin[cont] == 0)
		{
			printf("A quantidade minina nao pode ser zero\n Digite um valor valido\n");
			scanf("%d",&QuantMin[cont]);
		}
		}
		
		printf("Digite o preco unitario\n");
		scanf("%f",&precUni[cont]);
		
		
		
		CodProdut[ cont ] = cont;
		precTot[cont] = precUni[cont] * Quant[cont];
		cont++;
		printf("\nO codigo desse produto é %d\n\n", CodProdut[cont-1]);
		
		
		
		printf("\nDeseja continuar cadastrando produto?\n\n 1- Sim ou 9- Nao\n");
		fflush(stdin);
		scanf("%d",&menu);
	}
	

	
	while(menu == 2)
	{
		int consMerc = 0;
		int perCons = 0;
		int codMerc = 0;
		int quantMerc = 0;
	
		printf("\nVoce deseja consultar ou ir para a tela de entrada/saida de mercadoria?\n\n1 - Tela de entrada/Saida de mercadoria\n2 - Consulta\n \n");
		scanf("%d", &consMerc);
		
	
		
		while( consMerc == 1)
		{
			int entMerc = 0;
			
			printf("1 - Entrada e saida de mercadoria \n 2 - Saida da mercadoria \n 3 - Retorna ao menu anterior\n");
			scanf("%d", &entMerc);
			
			switch(entMerc)
			{
				case 1:
					printf("\nDigite o codigo do produto\n");
					scanf("%d", &codMerc);
					
					printf("\nDigite a quantidade de produtos comprados\n");
					scanf("%d", &quantMerc);
					
					Quant[codMerc] = Quant[codMerc] + quantMerc;
					
					printf("\nAtual numero de produtos em estoque: %d\n", Quant[codMerc]);
					break;
					
				case 2:
					printf("\nDigite o codigo do produto\n");
					scanf("%d", &codMerc);
					
					printf("Digite a quantidade de produtos vendidos\n");
					scanf("%d", &quantMerc);
					
					Quant[codMerc] = Quant[codMerc] - quantMerc;
					
					printf("\nAinda resta %d produtos em estoque\n", Quant[codMerc]);
					
					if( Quant[codMerc] <= QuantMin[codMerc]) printf("\nQuantidade menor ou igual a minima compre mais produtos\n");
					break;
				
				case 3:
					consMerc = entMerc;
					break;
					
				default:
					printf("\nValor Invalido\n\n");
				break;
			}
		}
		
		
		while( consMerc == 2)
		{
		
		printf("\nvocê deseja pesquisar pelo \n1-nome, \n2-codigo da mercadoria ou \n3-descrição?\n");
		scanf("%d", &perCons);
		
		int cont2 = 0;
		char pergunta2[30];
		int codigo2 = 0;
		char desc2 [100];
		
		switch(perCons)
		{
			case 1:
				printf("\nDigite o nome do produto\n");
				scanf("%s", &pergunta2);
				for(int i = 0; i < cont; i++)
				{
					if (strcmp (pergunta2, nomeProd[i]) == 0)
					{
						printf("Nome: %s\n", nomeProd[i]);
						printf("Codigo: %d\n\n", CodProdut[i]);
						printf("Descricao: %s\n", desc[i]);
						printf("Quantidade: %d\n", Quant[i]);
						printf("Quantidade minima: %d\n", QuantMin[i]);
						printf("Preco total: %f\n", precTot[i]);
					}
				}
				break;
			case 2:
				printf("\nDigite o Codigo do Produto\n");
				scanf("%d", &codigo2);
				for(int i = 0; i < cont; i++)
				{
					if(codigo2 == CodProdut[i] )
					{
						printf("Nome: %s\n", nomeProd[i]);
						printf("Codigo: %d\n\n", CodProdut[i]);
						printf("Descricao: %s\n", desc[i]);
						printf("Quantidade: %d\n", Quant[i]);
						printf("Quantidade minima: %d\n", QuantMin[i]);
						printf("Preco total: %f\n", precTot[i]);
					}
				}
				break;
			case 3:
				printf("Digite a descricao do produto\n");
				scanf("%s", &desc2);
				for(int i = 0; i < cont; i++)
				{
					if(strcmp(desc2, desc[i]) == 0)
					{
						printf("Nome: %s\n", nomeProd[i]);
						printf("Codigo: %d\n\n", CodProdut[i]);
						printf("Descricao: %s\n", desc[i]);
						printf("Quantidade: %d\n", Quant[i]);
						printf("Quantidade minima: %d\n", QuantMin[i]);
						printf("Preco total: %f\n", precTot[i]);
					}
				}
				break;
			default:
				printf("Opção invalida");
				break;
			
			}
			
		printf("Deseja continuar consultando?\n\n 2-Sim 9-Nao\n\n");
		scanf("%d", &menu);	
		
		consMerc = menu;
		
		}
		
		
	}
	
	while( menu == 3)
	{
		char altDesc[100];
		int perAlt = 0;
		char auxAlt[100];
		
		printf("\nDigite a descricao do produto: ");
		scanf("%s", &altDesc);
		while(perAlt == 0)
		{
		for(int i = 0; i < cont; i++)
		{
			if( auxAlt[i] == altDesc[i])
			{
				auxAlt[i] = altDesc[i];
			}
		}
		
		printf("E este produto que voce deseja alterar?  %s \n\n 1-Sim 2-Nao\n\n", auxAlt[perAlt]);
		scanf("%d", &perAlt);
		}
		
		while(perAlt == 1)
		{
			printf("\nDigite o nome do produto\n");
		scanf("%s", &nomeProd[cont]);
		fflush(stdin);
		while(nomeProd[cont] == '\0')
		{
			scanf("%s", nomeProd[cont]);
			if( nomeProd[cont] == '\0')
			{
				printf("Caracter Invalido digite um valido!!!\n");
				scanf("%s", &nomeProd[cont]);
			}
		}
		printf("\nDigite a descricao do produto\n");
		scanf("%s", &desc[cont]);		
		while(desc[cont] == '\0')
		{
			scanf("%s", &desc[cont]);
			if(desc[cont] == '\0')
			printf("Descricao invalida\n\nDigite uma descricao valida");
			scanf("%s", &desc[cont]);
		}
		
		printf("Digite a quantidade do produto\n");
		scanf("%d",&Quant[cont]);
		while (Quant[cont] == 0)
		{
			scanf("%d",&Quant[cont]);
			if( Quant[cont] == 0 )
			{
				printf("A quantidade do produto nao pode ser zero\n Digite um valor valido\n");
				scanf("%d",&Quant[cont]);
			}
		}
		
		printf("Digite a quantidade minima\n");
		scanf("%d",&QuantMin[cont]);
		while ( QuantMin[cont] == 0 )
		{
		scanf("%d",&QuantMin[cont]);
		if( QuantMin[cont] == 0)
		{
			printf("A quantidade minina nao pode ser zero\n Digite um valor valido\n");
			scanf("%d",&QuantMin[cont]);
		}
		}
		
		printf("Digite o preco unitario\n");
		scanf("%d",&precUni[cont]);
		
		printf("Os dados digitados estao corretos? \n 0 - Sim 1 - Nao\n");
		scanf("%s", &perAlt);
		}
		
		printf("Deseja alterar mais algum produto?\n 3- Sim 9- Nao\n");
		scanf("%d", &menu);
	}
	
	while( menu == 4)
	{
		int perExcl = 0;
		int duvida = 0;
		int perrExcl = 0;
		
		printf("Digite o Codigo do produto: \n");
		scanf("%d", &perExcl);
			
				for(int i = 0; i < cont; i++)
				{	
					if(perExcl == CodProdut[i])
					{
						printf("\nO produto que voce deseja excluir e esse? \n %d \n 1 - Sim 2 - Nao", nomeProd[i]);
						scanf("%d", &duvida);
				
						if(duvida == 1)
					{
						CodProdut[i] = 0;
						Quant[i] = 0;
						QuantMin[i] = 0;
						precUni[i] = '\0';
						desc[i][i] = '\0';
						nomeProd[i][i] = '\0'; 
							
					}
					}
				}
				
				printf("Deseja Excluir mais algum item?\n 4 - Sim 9 - Nao");
				scanf("%d", &menu);
			
			}
			
		
		while( menu == 5)
		{
			int perRel = 0;
			system("CLS");
			printf("\n\nVoce deseja consultar o Relatorio de produtos que precisa comprar ou produtos em geral? \n\n 1 - Comprar  2 - Geral\n");
			scanf("%d", &perRel);
			int l=5;
			if( perRel == 1)
			{
				system("CLS");
				gotoxy(1,1);
				printf("Descricao");
				gotoxy(20,1);
				printf("Quant Estoque");
				gotoxy(40,1);
				printf("Quant Minima");
				
				for( int i = 1; i < cont; i++)
				{
					if( QuantMin[i] >= Quant[i])
					{
						gotoxy(1,l);
						printf("%s", desc[i]);
						gotoxy(20,l);
						printf("%d", Quant[i]);
						gotoxy(40,l);
						printf("%d", QuantMin[i]);
						l++;
					}
			}
			}
			
			if( perRel == 2)
			{
				system("CLS");
				gotoxy(1,1);
				printf("Descricao");
				gotoxy(15,1);
				printf("Quant Estoque");
				gotoxy(30,1);
				printf("Quant Minima");
				gotoxy(50,1);
				printf("Preco unitario");
				gotoxy(70,1);
				printf("Preco total");
				for( int i = 1; i < cont; i++)
				{
						gotoxy(1,i+1);
						printf("%s", desc[i]);
						gotoxy(15,i+1);
						printf("%d", Quant[i]);
						gotoxy(30,i+1);
						printf("%d", QuantMin[i]);
						gotoxy(50,i+1);
						printf("%f", precUni[i]);
						gotoxy(70,i+1);
						printf("%f", precTot[i]);
				}
			}
			
			printf("\nDeseja emitir novamente o relatorio? 5 - Sim 9 - Nao\n");
			scanf("%d", &menu);
		}
		}

		
	}



