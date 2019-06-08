#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 255
#define ALG 17

void converte( int x, int base)
{
   char resto[ALG] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}, r[SIZE];
   int indx = 0;
	while(x>0)
	{
		r[indx]=resto[x%base];
		x /= base; 
		indx++;
	}     
	
	indx -= 1;
	
	   switch(base) {
       case 2 : printf("BINÁRIO: "); break;
       case 8 : printf("OCTAL: "); break;
       case 16 : printf("HEXADECIMAL: "); break;
   }

   for(indx; indx >= 0; indx--) 
       printf("%c", r[indx]);
   printf("\n");
}

int main(void){
	int numeroEntrada, base2, resto, i = 1;
	char getInt[16] = {'\0'};
	int retorna[16];
while( i != 0)
{
	printf("\nInforme um numero para converter:\n\n");
	printf("NUMERO => ");
	scanf("%d", &numeroEntrada);
	
	printf("Informe a base que deseja converter:\n\n");
	printf("NUMERO => ");
	scanf("%d", &base2);
	
	fflush(stdin);
	
	converte(numeroEntrada, base2);
	
		printf("\n\nDeseja consultar novamente? 1 - Sim 0 - Nao\n\n");
	scanf("%d", &i);
}
}
