#include <stdio.h>
#include <string>

using namespace std;

int main ()
{
	double nota1, nota2, media;
	char pergunta;
	char nome[20];
	
	pergunta = 'N';
	nota1 = 0.0;
	nota2 = 0.0;
	
	while( pergunta == 'N' )
	{
		printf("Digite o nome do aluno: ");
		gets(nome);
		
		printf("Digite a nota da 1a: ");
		scanf("%lf", &nota1);
		
		if( nota1 < 0.0 || nota1 > 10.0 )
		{
			printf("Nota invalida!!");
			
			printf("Digite a nota da 1a: ");
			scanf("%lf", &nota1);
		}
		
		printf("Digite a nota da 2a: ");
		scanf("%lf", &nota2);
		
		if( nota1 < 0.0 || nota1 > 10.0)
		{
			printf("Nota invalida!!");
			
			printf("Digite a nota da 2a: ");
			scanf("%lf", &nota2);
			
		}
		
		printf("Os dados estao corretos? (S/N)\n");
		scanf("%c", &pergunta);
		
		while( pergunta != 'S' && pergunta != 'N' )
		{
			printf("caracter invalido digite novamente!!\n");
			
			printf("Os dados estao corretos? (S/N)");
			scanf("%c", &pergunta);
		}
	}
	
	system("cls");
	media = ( nota1 + nota2) / 2;
	
	printf("Nome: %s", nome);
	
	if( media >=  6.0 )
	{
		printf("1a. Avaliacao \t2a. Avaliacao\t	Media\t	Resultado \n");
		printf("%lf ", nota1, "\t%lf ", nota2, "\t%lf ", media, "Aprovado");
	}
	else
		if( media < 6.0 && media >= 3.0)
		{
			printf("1a. Avaliacao \t2a. Avaliacao\t	Media\t	Resultado \n");
		    printf("%lf ", nota1, "\t%lf ", nota2, "\t%lf ", media, "Em Exame");
		    printf("Obs: Você deverá obter nota 6,0 no exame para aprovação!");
		}
		else
			if( media < 3.0 )
			{
				printf("1a. Avaliacao \t2a. Avaliacao\t	Media\t	Resultado \n");
				printf("%lf ", nota1, "\t%lf ", nota2, "\t%lf ", media, "Reprovado");
			}
	
	
	
	
}
