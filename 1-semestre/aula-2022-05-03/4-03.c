#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
     int quantcons;
     printf("Quantas pessoas fazem parte da pesquisa");
     scanf("%d",&quantcons);
     float Msalario, Mfilhos, Salario[quantcons];
     int filhos[quantcons];
     for (int x=0;x<quantcons;x++)
     {
         printf("Digite o salario %d:",(x+1));
         scanf("%f",&Salario[x]);
         printf("Digite a quantidade de filhos %d:", (x+1));
         scanf("%d",&filhos[x]);
	}
	float somasal=0, somafil=0;
	for (int x=0;x<quantcons;x++){
			somasal=somasal+Salario[x];
			somafil=somafil+filhos[x];
	}
	Msalario=somasal/quantcons;
	Mfilhos=somafil/quantcons;
	printf("A media de salario e %.2f\n", Msalario);
	printf("A media de filhos e %.2f\n", Mfilhos);

     return 0;
 }