#include <stdio.h>
#include <conio.h>

main()
{

	struct cadastro_vaca
    {
        int codigo[50];
        int leite;
        int alim;
        int nasc;
    };
    


	int per;

	printf("Digite o numero de Vacas que deseja cadastrar: \n");
	scanf("%d", &per);

	struct cadastro_vaca vaca[per];	

	int data = 2018;
	int contAbate = 0;
	int perguntaAbate = 99;
	int leiteTotal=0, leitePos=0;
	int alimTotal=0, alimPos=0;
	int i = 0;
	int controle = 1;
	 
	while( perguntaAbate != 0)	
	{
	
	
	while( controle != 0)
	{
		
		printf("Digite o numero de litros produzido por semana da vaca %d: \n", i);
		scanf("%d", &vaca[i].leite);
		fflush(stdin);

		leiteTotal = vaca[i].leite + leiteTotal;
		
		printf("Digite os kilos de alimentos consumidos para a vaca %d: \n", i);
		scanf("%d", &vaca[i].alim);
		
		alimTotal = alimTotal + vaca[i].alim;
		fflush(stdin);
		printf("Digite o ano de nascimento da vaca %d: \n", i);
		scanf("%d", &vaca[i].nasc);
		
		fflush(stdin);

		if( vaca[i].nasc < data-5 || vaca[i].leite < 40 || vaca[i].leite > 50 && vaca[i].leite < 70 && vaca[i].alim > 50)
		{
			contAbate++;
			vaca[i].alim = 0;
			vaca[i].leite = 0;
		}
			
			leitePos = leitePos + vaca[i].leite;
		    alimPos = alimPos + vaca[i].alim;
		
		i++;
		
		printf("\n\nDeseja cadastrar mais vacas? 1 - Sim 0 - Nao\n\n");
		scanf("%d", &controle);
	}
	
	
	while( perguntaAbate != 0)
	{
		printf("\n\n1 -Devolver a quantidade total de leite produzida por semana na fazenda.\n\n 2 - Devolver a quantidade total de alimento consumido por semana na fazenda.\n\n 3 - Devolver a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate\n\n 4 - Devolver a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate\n\n 5 - Devolver número de cabeças de gado que iram para o abate.\n\n 6 - Cadastrar mais vacas \n\n 0 - Sair do programa. \n");
		scanf("%d", &perguntaAbate);
		fflush(stdin);

		if( perguntaAbate == 1)
		{
			printf("\n\nQuantidade de leite produzido na semana: %d\n", leiteTotal);
		}
		
		if( perguntaAbate == 2)
		{
			printf("\n\nQuantidade de alimentos consumidos em uma semana: %d\n", alimTotal);
		}
		
		if( perguntaAbate == 3)
		{
			printf("\n\nQuantidade de leite produzida apos o abate: %d\n", leitePos);
		}
		
		if(perguntaAbate == 4)
		{
			printf("\n\nQuantidade de alimento Consumida apost o abate: %d\n", alimPos);
		}
		
		if( perguntaAbate == 5)
		{
			printf("\n\nNumero de vacas a serem mortas: %d\n", contAbate);
		}
		fflush(stdin);

		if( perguntaAbate == 6) perguntaAbate = 0;
		
		printf("\n\nDesejar consultar novamente?\n 1 - Sim 0 - Nao\n\n");
		scanf("%d", &perguntaAbate);
		fflush(stdin);	
	}
	
	printf("\n\nDeseja continuar cadastrando vaca? 1 - Sim 0 - Nao\n\n");
	scanf("%d", &perguntaAbate);
		fflush(stdin);
}

}

