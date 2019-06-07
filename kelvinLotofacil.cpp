#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iostream>
int main()
{
char resultado[60];	
char dez01[3];
char dez02[3];
char dez03[3];
char dez04[3];
char dez05[3];
char dez06[3];
char dez07[3];
char dez08[3];
char dez09[3];
char dez10[3];
char dez11[3];
char dez12[3];
char dez13[3];
char dez14[3];
char dez15[3];

FILE *lotofacil;
char dz01[3];
char dz02[3];
char dz03[3];
char dz04[3];
char dz05[3];
char dz06[3];
char dz07[3];
char dz08[3];
char dz09[3];
char dz10[3];
char dz11[3];
char dz12[3];
char dz13[3];
char dz14[3];
char dz15[3];
char aux[3];

int cont = 0, temp = 0, tam = 6, per = 0, cont11 = 0, cont12 = 0, cont13 = 0, cont14 = 0, cont15 = 0;
while( per == 0){
	lotofacil = fopen("lotofacil2.txt","r");
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
	printf("Digite o numero da 7 dezena: \n");
	scanf("%s", &aux);
	dz07[0] = aux[0]; dz07[1] = aux[1]; dz07[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 8 dezena: \n");
	scanf("%s", &aux);
	dz08[0] = aux[0]; dz08[1] = aux[1]; dz08[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 9 dezena: \n");
	scanf("%s", &aux);
	dz09[0] = aux[0]; dz09[1] = aux[1]; dz09[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 10 dezena: \n");
	scanf("%s", &aux);
	dz10[0] = aux[0]; dz10[1] = aux[1]; dz10[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 11 dezena: \n");
	scanf("%s", &aux);
	dz11[0] = aux[0]; dz11[1] = aux[1]; dz11[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 12 dezena: \n");
	scanf("%s", &aux);
	dz12[0] = aux[0]; dz12[1] = aux[1]; dz12[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 13 dezena: \n");
	scanf("%s", &aux);
	dz13[0] = aux[0]; dz13[1] = aux[1]; dz13[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 14 dezena: \n");
	scanf("%s", &aux);
	dz14[0] = aux[0]; dz14[1] = aux[1]; dz14[2] = '\0';	
	fflush(stdin);
	printf("Digite o numero da 15 dezena: \n");
	scanf("%s", &aux);
	dz15[0] = aux[0]; dz15[1] = aux[1]; dz15[2] = '\0';	
	fflush(stdin);
 
 	while (!feof(lotofacil))
	{
	fflush(stdin);
	fgets (resultado,61,lotofacil);
	printf("\n %s",resultado);
	fflush(stdin);
	dez01[0]=resultado[16];
	dez01[1]=resultado[17];
	dez01[2]='\0';
	dez02[0]=resultado[19];
	dez02[1]=resultado[20];
	dez02[2]='\0';
	dez03[0]=resultado[22];
	dez03[1]=resultado[23];
	dez03[2]='\0';
	dez04[0]=resultado[25];
	dez04[1]=resultado[26];
	dez04[2]='\0';
	dez05[0]=resultado[28];
	dez05[1]=resultado[29];
	dez05[2]='\0';
	dez06[0]=resultado[31];
	dez06[1]=resultado[32];
	dez06[2]='\0';	
	dez07[0]=resultado[34];
	dez07[1]=resultado[35];
	dez07[2]='\0';
	dez08[0]=resultado[37];
	dez08[1]=resultado[38];
	dez08[2]='\0';
	dez09[0]=resultado[40];
	dez09[1]=resultado[41];
	dez09[2]='\0';
	dez10[0]=resultado[43];
	dez10[1]=resultado[44];
	dez10[2]='\0';
	dez11[0]=resultado[46];
	dez11[1]=resultado[47];
	dez11[2]='\0';
	dez12[0]=resultado[49];
	dez12[1]=resultado[50];
	dez12[2]='\0';
	dez13[0]=resultado[52];
	dez13[1]=resultado[53];
	dez13[2]='\0';
	dez14[0]=resultado[55];
	dez14[1]=resultado[56];
	dez14[2]='\0';
	dez15[0]=resultado[58];
	dez15[1]=resultado[59];
	dez15[2]='\0';
	if( strcmp(dez01, dz01) == 0 || strcmp(dez01, dz02) == 0 || strcmp(dez01, dz03) == 0 || strcmp(dez01, dz04) == 0 || strcmp(dez01, dz05) == 0 || strcmp(dez01, dz06) == 0 || strcmp(dez01, dz07) == 0 || strcmp(dez01, dz08) == 0 || strcmp(dez01, dz09) == 0 || strcmp(dez01, dz10) == 0 || strcmp(dez01, dz11) == 0 || strcmp(dez01, dz12) == 0 || strcmp(dez01, dz13) == 0 || strcmp(dez01, dz14) == 0 || strcmp(dez01, dz15) == 0) cont++;
	if( strcmp(dez02, dz01) == 0 || strcmp(dez02, dz02) == 0 || strcmp(dez02, dz03) == 0 || strcmp(dez02, dz04) == 0 || strcmp(dez02, dz05) == 0 || strcmp(dez02, dz06) == 0 || strcmp(dez02, dz07) == 0 || strcmp(dez02, dz08) == 0 || strcmp(dez02, dz09) == 0 || strcmp(dez02, dz10) == 0 || strcmp(dez02, dz11) == 0 || strcmp(dez02, dz12) == 0 || strcmp(dez02, dz13) == 0 || strcmp(dez02, dz14) == 0 || strcmp(dez02, dz15) == 0) cont++;
	if( strcmp(dez03, dz01) == 0 || strcmp(dez03, dz02) == 0 || strcmp(dez03, dz03) == 0 || strcmp(dez03, dz04) == 0 || strcmp(dez03, dz05) == 0 || strcmp(dez03, dz06) == 0 || strcmp(dez03, dz07) == 0 || strcmp(dez03, dz08) == 0 || strcmp(dez03, dz09) == 0 || strcmp(dez03, dz10) == 0 || strcmp(dez03, dz11) == 0 || strcmp(dez03, dz12) == 0 || strcmp(dez03, dz13) == 0 || strcmp(dez03, dz14) == 0 || strcmp(dez03, dz15) == 0) cont++;
	if( strcmp(dez04, dz01) == 0 || strcmp(dez04, dz02) == 0 || strcmp(dez04, dz03) == 0 || strcmp(dez04, dz04) == 0 || strcmp(dez04, dz05) == 0 || strcmp(dez04, dz06) == 0 || strcmp(dez04, dz07) == 0 || strcmp(dez04, dz08) == 0 || strcmp(dez04, dz09) == 0 || strcmp(dez04, dz10) == 0 || strcmp(dez04, dz11) == 0 || strcmp(dez04, dz12) == 0 || strcmp(dez04, dz13) == 0 || strcmp(dez04, dz14) == 0 || strcmp(dez04, dz15) == 0) cont++;
	if( strcmp(dez05, dz01) == 0 || strcmp(dez05, dz02) == 0 || strcmp(dez05, dz03) == 0 || strcmp(dez05, dz04) == 0 || strcmp(dez05, dz05) == 0 || strcmp(dez05, dz06) == 0 || strcmp(dez05, dz07) == 0 || strcmp(dez05, dz08) == 0 || strcmp(dez05, dz09) == 0 || strcmp(dez05, dz10) == 0 || strcmp(dez05, dz11) == 0 || strcmp(dez05, dz12) == 0 || strcmp(dez05, dz13) == 0 || strcmp(dez05, dz14) == 0 || strcmp(dez05, dz15) == 0) cont++;
	if( strcmp(dez06, dz01) == 0 || strcmp(dez06, dz02) == 0 || strcmp(dez06, dz03) == 0 || strcmp(dez06, dz04) == 0 || strcmp(dez06, dz05) == 0 || strcmp(dez06, dz06) == 0 || strcmp(dez06, dz07) == 0 || strcmp(dez06, dz08) == 0 || strcmp(dez06, dz09) == 0 || strcmp(dez06, dz10) == 0 || strcmp(dez06, dz11) == 0 || strcmp(dez06, dz12) == 0 || strcmp(dez06, dz13) == 0 || strcmp(dez06, dz14) == 0 || strcmp(dez06, dz15) == 0) cont++;
	if( strcmp(dez07, dz01) == 0 || strcmp(dez07, dz02) == 0 || strcmp(dez07, dz03) == 0 || strcmp(dez07, dz04) == 0 || strcmp(dez07, dz05) == 0 || strcmp(dez07, dz06) == 0 || strcmp(dez07, dz07) == 0 || strcmp(dez07, dz08) == 0 || strcmp(dez07, dz09) == 0 || strcmp(dez07, dz10) == 0 || strcmp(dez07, dz11) == 0 || strcmp(dez07, dz12) == 0 || strcmp(dez07, dz13) == 0 || strcmp(dez07, dz14) == 0 || strcmp(dez07, dz15) == 0) cont++;
	if( strcmp(dez08, dz01) == 0 || strcmp(dez08, dz02) == 0 || strcmp(dez08, dz03) == 0 || strcmp(dez08, dz04) == 0 || strcmp(dez08, dz05) == 0 || strcmp(dez08, dz06) == 0 || strcmp(dez08, dz07) == 0 || strcmp(dez08, dz08) == 0 || strcmp(dez08, dz09) == 0 || strcmp(dez08, dz10) == 0 || strcmp(dez08, dz11) == 0 || strcmp(dez08, dz12) == 0 || strcmp(dez08, dz13) == 0 || strcmp(dez08, dz14) == 0 || strcmp(dez08, dz15) == 0) cont++;
	if( strcmp(dez09, dz01) == 0 || strcmp(dez09, dz02) == 0 || strcmp(dez09, dz03) == 0 || strcmp(dez09, dz04) == 0 || strcmp(dez09, dz05) == 0 || strcmp(dez09, dz06) == 0 || strcmp(dez09, dz07) == 0 || strcmp(dez09, dz08) == 0 || strcmp(dez09, dz09) == 0 || strcmp(dez09, dz10) == 0 || strcmp(dez09, dz11) == 0 || strcmp(dez09, dz12) == 0 || strcmp(dez09, dz13) == 0 || strcmp(dez09, dz14) == 0 || strcmp(dez09, dz15) == 0) cont++;
	if( strcmp(dez10, dz01) == 0 || strcmp(dez10, dz02) == 0 || strcmp(dez10, dz03) == 0 || strcmp(dez10, dz04) == 0 || strcmp(dez10, dz05) == 0 || strcmp(dez10, dz06) == 0 || strcmp(dez10, dz07) == 0 || strcmp(dez10, dz08) == 0 || strcmp(dez10, dz09) == 0 || strcmp(dez10, dz10) == 0 || strcmp(dez10, dz11) == 0 || strcmp(dez10, dz12) == 0 || strcmp(dez10, dz13) == 0 || strcmp(dez10, dz14) == 0 || strcmp(dez10, dz15) == 0) cont++;
	if( strcmp(dez11, dz01) == 0 || strcmp(dez11, dz02) == 0 || strcmp(dez11, dz03) == 0 || strcmp(dez11, dz04) == 0 || strcmp(dez11, dz05) == 0 || strcmp(dez11, dz06) == 0 || strcmp(dez11, dz07) == 0 || strcmp(dez11, dz08) == 0 || strcmp(dez11, dz09) == 0 || strcmp(dez11, dz10) == 0 || strcmp(dez11, dz11) == 0 || strcmp(dez11, dz12) == 0 || strcmp(dez11, dz13) == 0 || strcmp(dez11, dz14) == 0 || strcmp(dez11, dz15) == 0) cont++;
	if( strcmp(dez12, dz01) == 0 || strcmp(dez12, dz02) == 0 || strcmp(dez12, dz03) == 0 || strcmp(dez12, dz04) == 0 || strcmp(dez12, dz05) == 0 || strcmp(dez12, dz06) == 0 || strcmp(dez12, dz07) == 0 || strcmp(dez12, dz08) == 0 || strcmp(dez12, dz09) == 0 || strcmp(dez12, dz10) == 0 || strcmp(dez12, dz11) == 0 || strcmp(dez12, dz12) == 0 || strcmp(dez12, dz13) == 0 || strcmp(dez12, dz14) == 0 || strcmp(dez12, dz15) == 0) cont++;
	if( strcmp(dez13, dz01) == 0 || strcmp(dez13, dz02) == 0 || strcmp(dez13, dz03) == 0 || strcmp(dez13, dz04) == 0 || strcmp(dez13, dz05) == 0 || strcmp(dez13, dz06) == 0 || strcmp(dez13, dz07) == 0 || strcmp(dez13, dz08) == 0 || strcmp(dez13, dz09) == 0 || strcmp(dez13, dz10) == 0 || strcmp(dez13, dz11) == 0 || strcmp(dez13, dz12) == 0 || strcmp(dez13, dz13) == 0 || strcmp(dez13, dz14) == 0 || strcmp(dez13, dz15) == 0) cont++;
	if( strcmp(dez14, dz01) == 0 || strcmp(dez14, dz02) == 0 || strcmp(dez14, dz03) == 0 || strcmp(dez14, dz04) == 0 || strcmp(dez14, dz05) == 0 || strcmp(dez14, dz06) == 0 || strcmp(dez14, dz07) == 0 || strcmp(dez14, dz08) == 0 || strcmp(dez14, dz09) == 0 || strcmp(dez14, dz10) == 0 || strcmp(dez14, dz11) == 0 || strcmp(dez14, dz12) == 0 || strcmp(dez14, dz13) == 0 || strcmp(dez14, dz14) == 0 || strcmp(dez14, dz15) == 0) cont++;
	if( strcmp(dez15, dz01) == 0 || strcmp(dez15, dz02) == 0 || strcmp(dez15, dz03) == 0 || strcmp(dez15, dz04) == 0 || strcmp(dez15, dz05) == 0 || strcmp(dez15, dz06) == 0 || strcmp(dez15, dz07) == 0 || strcmp(dez15, dz08) == 0 || strcmp(dez15, dz09) == 0 || strcmp(dez15, dz10) == 0 || strcmp(dez15, dz11) == 0 || strcmp(dez15, dz12) == 0 || strcmp(dez15, dz13) == 0 || strcmp(dez15, dz14) == 0 || strcmp(dez15, dz15) == 0) cont++;
	
	printf ("\n Dezena 01: %s",dez01);
	printf ("\n Dezena 02: %s",dez02);
	printf ("\n Dezena 03: %s",dez03);
	printf ("\n Dezena 04: %s",dez04);
	printf ("\n Dezena 05: %s",dez05);
	printf ("\n Dezena 06: %s",dez06);
	printf ("\n Dezena 07: %s",dez07);
	printf ("\n Dezena 08: %s",dez08);
	printf ("\n Dezena 09: %s",dez09);
	printf ("\n Dezena 10: %s",dez10);
	printf ("\n Dezena 11: %s",dez11);
	printf ("\n Dezena 12: %s",dez12);
	printf ("\n Dezena 13: %s",dez13);
	printf ("\n Dezena 14: %s",dez14);
	printf ("\n Dezena 15: %s\n",dez15);
if( cont == 11){
	cont11++;
	cont = 0;
}
if( cont == 12)
{
 	cont12++;
 	cont = 0;
}

if(cont == 13)
{
 	cont13++;
 	cont = 0;
}
if( cont == 14)
{
	cont14++;
	cont = 0;
}
if( cont == 15)
{
	cont15++;
	cont = 0;	
}

cont = 0;
system("cls");


	}
	
	printf("\nVoce acertou %d em 11 pontos\n", cont11);
	printf("\nVoce acertou %d em 12 pontos\n", cont12);
	printf("\nVoce acertou %d em 13 pontos\n", cont13);
	printf("\nVoce acertou %d em 14 pontos\n", cont14);
	printf("\nVoce acertou %d em 15 pontos\n", cont15);
	getch();
	printf("Continuar? 0 - sim 1 - nao");
	scanf("%d", &per);
	system("cls");
}
}
