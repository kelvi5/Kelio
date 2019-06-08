#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
main ()
{
	
	//Gilberto Aparecido e Kelvin 
	int Cand1 = 0, Cand2 = 0, Cand3 = 0, Cand4 = 0, Cand5 = 0, Cont, Nulo = 0, Branco = 0, total = 0, voto = 0, Per = 1;
	
	Cont = 0;
	while( Cont < 99 && Per == 1 )
	{
	
	printf("\nEm quem deseja votar\n\n 0-Nulo\n 1-Chaves\n 2-Barriga\n 3-Florinda\n 4-Kiko\n 5-Chiquinha\n 6-Branco\n\n");
	scanf("%d", &voto);
	
	if( voto == 0)
	{
		Nulo = Nulo + 1;
	}
	else if( voto == 1)
	{
		Cand1 = Cand1 + 1;
	}
	else if( voto == 2)
	{
		Cand2 = Cand2 + 1;
	}
	else if( voto == 3)
	{
		Cand3 = Cand3 + 1;
	}
	else if( voto == 4)
	{
		Cand4 = Cand4 + 1;
	}
	else if( voto == 5)
	{
		Cand5 = Cand5 + 1;
	}
	else if( voto == 6)
	{
		Branco = Branco + 1;
	}
	else if( voto != 0 || voto != 1 || voto != 2 || voto != 3 || voto != 4 || voto != 5 || voto != 6)
	{
		printf("Voto Invalido!!!");
	}
	
		printf("Voto computado!\n");
		printf("Deseja continuar? 1-Sim 0-Nao\n");
		scanf("%d", &Per);
	
	total = total + 1;
	Cont = Cont + 1;
	}
	
	printf("\nTotal de votos: %d\n", total);
	printf("Total de votos para o primeiro candidado: %d\n", Cand1);
	printf("Total de votos para o segundo candidado: %d\n", Cand2);
	printf("Total de votos para o terceiro candidado: %d\n", Cand3);
	printf("Total de votos para o quarto candidado: %d\n", Cand4);
	printf("Total de votos para o quinto candidado: %d\n", Cand5);
	printf("Total de votos nulo: %d\n", Nulo);
	printf("Total de votos para voto em branco: %d\n", Branco);
	
	if( Cand1 > Cand2 && Cand1 > Cand3 && Cand1 > Cand4 && Cand1 > Cand5)
	{
		printf("\n\nO ganhador da eleição é o Chaves ");
	}
	else if( Cand2 > Cand1 && Cand2 > Cand3 && Cand2 > Cand4 && Cand2 > Cand5 ) 
	{
		printf("\n\nO ganhador da eleição é o Barriga ");
	}
	else if( Cand3 > Cand1 && Cand3 > Cand2 && Cand3 > Cand4 && Cand3 > Cand5 ) 
	{
		printf("\n\nO ganhador da eleição é o Florinda ");
	}
	else if( Cand4 > Cand1 && Cand4 > Cand2 && Cand4 > Cand3 && Cand2 > Cand5 ) 
	{
		printf("\n\nO ganhador da eleição é o Kiko ");
	}
	else if( Cand5 > Cand1 && Cand5 > Cand2 && Cand5 > Cand3 && Cand5 > Cand4 ) 
	{
		printf("\n\nO ganhador da eleição é o Chiquinha ");
	}

}
