#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char palavra1[15]="programação\n";
	char palavra2[20]={'l','i','n','g','u','a','g','e','m','\n'};
	char palavra3[]="texto 1";
	char *palavra4="texto2";
	char palavra5[50];
	//char palavra6[];forma errada.
	printf(palavra1);
	printf(palavra2);
	puts(palavra3);
	puts(palavra4);
	puts("Digite uma palavra");
	scanf("%s",palavra5);
	fflush(stdin);//limpa
	puts(palavra5);
	puts("tente Novamente");
	gets(palavra5);
	puts(palavra5);
}