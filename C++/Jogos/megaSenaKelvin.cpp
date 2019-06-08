#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iostream>
int main()
{
char resultado[34];	
char dez01[3];
char dez02[3];
char dez03[3];
char dez04[3];
char dez05[3];
char dez06[3];
FILE *mega;
char dz01[3];
char dz02[3];
char dz03[3];
char dz04[3];
char dz05[3];
char dz06[3];
char aux[3];

int quadra1[4][5] = {{01, 02, 03, 04, 05}, {11, 12, 13, 14, 15}, {21, 22, 23, 24, 25}};
int quadra2[4][5] = {{06, 07, 8, 9, 10},   {16, 17, 18, 19, 20}, {26, 27, 28, 29, 30}};
int quadra3[4][5] = {{31, 32, 33, 34, 35}, {41, 42, 43, 44, 45}, {51, 52, 53, 54, 55}};
int quadra4[4][5] = {{36, 37, 38, 39, 40}, {46, 47, 48, 49, 50}, {56, 57, 58, 59, 60}};
int cont = 0, temp = 0, tam = 6, per = 0;
int ter = 0, qua = 0, qui = 0, sen = 0;



while( per == 0)
{
system("cls");
printf("oque quer \n1 - Consultar jogo \n2 - Pesquisar dezenas\n");
scanf("%d", &per);

while(per == 1)
{
	mega = fopen("mega.txt","r");
	fflush(stdin);
	printf("Digite o numero da 1 dezena: \n");
	scanf("%s", &aux);
	dz01[0] = aux[0]; dz01[1] = aux[1]; dz01[2] = '\0';
	fflush(stdin);
	printf("Digite o numero da 2 dezena: \n");
	scanf("%s", &aux);
	dz02[0] = aux[0]; dz02[1] = aux[1]; dz02[2] = '\0';
	fflush(stdin);
	printf("Digite o numero da 3 dezena: \n");
	scanf("%s", &aux);
	dz03[0] = aux[0]; dz03[1] = aux[1]; dz03[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 4 dezena: \n");
	scanf("%s", &aux);
	dz04[0] = aux[0]; dz04[1] = aux[1]; dz04[2] = '\0';
	fflush(stdin);
	printf("Digite o numero da 5 dezena: \n");
	scanf("%s", &aux);
	dz05[0] = aux[0]; dz05[1] = aux[1]; dz05[2] = '\0';
	fflush(stdin);
	printf("Digite o numero da 6 dezena: \n");
	scanf("%s", &aux);
	dz06[0] = aux[0]; dz06[1] = aux[1]; dz06[2] = '\0';	
	fflush(stdin);
	

while (!feof(mega))
{
fgets (resultado,35,mega);
printf("\n %s",resultado);

dez01[0]=resultado[5];
dez01[1]=resultado[6];
dez01[2]='\0';
dez02[0]=resultado[8];
dez02[1]=resultado[9];
dez02[2]='\0';
dez03[0]=resultado[11];
dez03[1]=resultado[12];
dez03[2]='\0';
dez04[0]=resultado[14];
dez04[1]=resultado[15];
dez04[2]='\0';
dez05[0]=resultado[17];
dez05[1]=resultado[18];
dez05[2]='\0';
dez06[0]=resultado[20];
dez06[1]=resultado[21];
dez06[2]='\0';



if( strcmp(dez01, dz01) == 0 || strcmp(dez01, dz02) == 0 || strcmp(dez01, dz03) == 0 || strcmp(dez01, dz04) == 0 || strcmp(dez01, dz05) == 0 || strcmp(dez01, dz06) == 0) cont++;
if( strcmp(dez02, dz01) == 0 || strcmp(dez02, dz02) == 0 || strcmp(dez02, dz03) == 0 || strcmp(dez02, dz04) == 0 || strcmp(dez02, dz05) == 0 || strcmp(dez02, dz06) == 0) cont++;
if( strcmp(dez03, dz01) == 0 || strcmp(dez03, dz02) == 0 || strcmp(dez03, dz03) == 0 || strcmp(dez03, dz04) == 0 || strcmp(dez03, dz05) == 0 || strcmp(dez03, dz06) == 0) cont++;
if( strcmp(dez04, dz01) == 0 || strcmp(dez04, dz02) == 0 || strcmp(dez04, dz03) == 0 || strcmp(dez04, dz04) == 0 || strcmp(dez04, dz05) == 0 || strcmp(dez04, dz06) == 0) cont++;
if( strcmp(dez05, dz01) == 0 || strcmp(dez05, dz02) == 0 || strcmp(dez05, dz03) == 0 || strcmp(dez05, dz04) == 0 || strcmp(dez05, dz05) == 0 || strcmp(dez05, dz06) == 0) cont++;
if( strcmp(dez06, dz01) == 0 || strcmp(dez06, dz02) == 0 || strcmp(dez06, dz03) == 0 || strcmp(dez06, dz04) == 0 || strcmp(dez06, dz05) == 0 || strcmp(dez06, dz06) == 0) cont++;

printf ("\n Dezena 01: %s",dez01);
printf ("\n Dezena 02: %s",dez02);
printf ("\n Dezena 03: %s",dez03);
printf ("\n Dezena 04: %s",dez04);
printf ("\n Dezena 05: %s",dez05);
printf ("\n Dezena 06: %s",dez06);

if( cont == 3){
	printf("Terno");
	getch();
}
if( cont == 4){
	printf("Quadra");
	getch();
}
if( cont == 5){
	printf("Quina");
	getch();
}
if( cont == 6){
	printf("Sena");
	getch();
}	

cont = 0;
system("cls");
}
printf("\n\nVocê jogou os numeros %s %s %s %s %s %s\n\n", dz01, dz02, dz03, dz04, dz05, dz06);
printf("Deseja retornar ao menu anterior ou fazer nova pesquisa? \n\n 1 - Nova pesquisa 0 - Menu\n");
scanf("%d", &per);
system("cls");
}

while( per == 2)
{
	mega = fopen("mega.txt","r");
	int conta = 0;
	char dezp[3];
	printf("Digite a dezena a ser pesquisada\n");
	scanf("%s", &dezp);
//	int contador = 00;
//	while( contador < 60)
//	{
	while (!feof(mega))
	{
		fgets (resultado,35,mega);
		
	dez01[0]=resultado[5];
	dez01[1]=resultado[6];
	dez01[2]='\0';
	dez02[0]=resultado[8];
	dez02[1]=resultado[9];
	dez02[2]='\0';
	dez03[0]=resultado[11];
	dez03[1]=resultado[12];
	dez03[2]='\0';
	dez04[0]=resultado[14];
	dez04[1]=resultado[15];
	dez04[2]='\0';
	dez05[0]=resultado[17];
	dez05[1]=resultado[18];
	dez05[2]='\0';
	dez06[0]=resultado[20];
	dez06[1]=resultado[21];
	dez06[2]='\0';
		if( strcmp(dez01, dezp) == 0 || strcmp(dez02, dezp) == 0 || strcmp(dez03, dezp) == 0 || strcmp(dez04, dezp) == 0 || strcmp(dez05, dezp) == 0 || strcmp(dez06, dezp) == 0)
		 conta++;
	 
	}
	/*printf("A dezena %s apareceu %d vezes\n\n", dezp, conta);
	getch();
	char aux[3];
	sprintf(aux, "%d", contador);
	dezp[0]=aux[0];
	dezp[1]=aux[1];
	dezp[2]='\0';
	contador++;
	conta = 0;*/
//}
	
	system("cls");
	printf("A dezena %s apareceu %d vezes\n\n", dezp, conta);
	printf("Deseja voltar ao menu anterior ou fazer nova pesquisa? \n0 - Menu 2 - Nova pesquisa\n\n");
	scanf("%d", &per);

}
}
fclose(mega);
return(0);
}
