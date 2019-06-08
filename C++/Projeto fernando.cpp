#include <stdio.h>
#include <conio.h>

main()
{
	int menu, CodProdut[100], Quant[100], QuantMin[100], cont;
	float precUni[100], precTot;
	char desc[100][100];
	
	menu = 1;
	cont = 0;
	

	/*while( menu != 0 )
	{*/
		printf("Bem vindo!!\nSelecione a opcao desejada\n");
		printf("1- Cadastro\n");
		printf("2- Consulta\n");
		printf("3- Alteracao\n");
		printf("4- Exclusao\n");
		printf("5- Relatorio\n");
		printf("0- Fim\n");
		scanf("%d", &menu);
		
	
	
	while( menu == 1)
	{
		printf("\nDigite a descricao do produto\n");
		scanf("%s", &desc[cont][cont]);
		
		if(desc [cont][cont] == '\0')
		{
			printf("Descricao invalida\n\nDigite uma descricao valida");
			scanf("%s", &desc[cont][cont]);
		}
		
		printf("Digite a quantidade do produto\n");
		while (Quant[cont] == 0)
		{
			scanf("%d", &Quant[cont]);
			if( Quant[cont] == 0 )
			{
				printf("A quantidade minina nao pode ser zero\n Digite um valor valido\n");
			}
		}
		
		printf("Digite a quantidade minima\n");
		while ( QuantMin[cont] == 0 )
		{
		scanf("%d", &QuantMin[cont]);
		if( QuantMin[cont] == 0)
		{
			printf("A quantidade minina nao pode ser zero\n Digite um valor valido\n");
		}
		}
		
		printf("Digite o preco unitario\n");
		scanf("%d", &precUni[cont]);
		
		printf("\nDeseja continuar cadastrando produto?\n\n 1- Sim ou 0- Nao\n");
		scanf("%d", &menu);
		
		CodProdut[ cont ] = cont;
		cont++;
	}
	
	

}
