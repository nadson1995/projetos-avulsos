#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a=0,b=0,c=0,d=0,e=0,voto;
	printf("Os candidados das Eleições são:\n\n");
	printf("	1-Candidato Jair Rodrigues\n	2-Candidato Carlos Luz\n	3-Candidato Neves Rocha\n	4-Nulo\n	5-Branco\n");
	printf("\n	Entre com o seu voto:\n");
	scanf("%d", &voto);
	switch(voto)
	{
		case 1:
			a++;
			continue;
		case 2:
			b++;
			continue;
		case 3:
			c++;
			continue;
		case 4:
			d++;
			continue;
		case 5:
			e++;
			continue;
		case 6:
			printf("resultado de a=%f",a);
		case 7:
			continue;
        default:
            printf("Opção inválida\n");
            continue;
	}
	while(voto!=7)

	return;
}
