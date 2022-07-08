#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a=0,b=0,c=0,d=0,e=0,voto;
	int soma1;
	float percent1, percent2;
	do {
	printf("Os candidados das Eleições são:\n\n");
	printf("	1-Candidato Jair Rodrigues\n	2-Candidato Carlos Luz\n	3-Candidato Neves Rocha\n	4-Nulo\n	5-Branco\n	6-Finalizar");
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
		case 7:
			soma1=a+b+c+d+e;
			if(soma1==0){
				printf("Não é possivel ver resultados sem votos\n");
				continue;
			}
			percent1=d*100/soma1;
			percent2=e*100/soma1;
			printf("Numero total de votos são %d\n",soma1);
			printf("resultado do Candidato Jair Rodrigues é %d\n",a);
			printf("resultado do Candidato Carlos Luz é %d\n",b);
			printf("resultado do Candidato Neves Rocha é %d\n",c);
			printf("Numero de votos Nulos são %d\n",d);
			printf("Numero de votos brancos são %d\n",e);
			printf("A porcentagem dos votos nulos são %.1f%%\n",percent1);
			printf("A porcentagem dos votos Brancos são %.1f%%\n\n",percent2);
			if(a>b && a>c){
				printf("O Candidato Jair Rodrigues é o ganhador\n");
			} else if (b>a&&b>c){
				printf("O Candidato Carlos Luz é o ganhador\n");
			} else if (c>a&&c>b){
				printf("O Candidato Neves Rocha é o ganhador\n");
			}else {
				printf ("#############\n");
				printf ("Houve empate\n");
				printf ("#############\n\n\n");
				if (a==b&&a>c){
					printf("O Candidato Jair Rodrigues e Carlos Luz empataram\n");
				} else if (b==c&&b>a){
					printf("O Candidato Carlos Luz e Neves Rocha empataram\n");
				} else if (c==a&&c>b){
					printf("O Candidato Jair Rodrigues e Neves Rocha empataram\n");
				} else if(a==b&&a==c){
					printf("Todos os candidados empataram\n\n\n\n\n\n");
				}

			}
			continue;
		case 6:
			continue;
        default:
            printf("Opção inválida\n");
            continue;
	}
	}
	while(voto!=6);

	return 0;
}