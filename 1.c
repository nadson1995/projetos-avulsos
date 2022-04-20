#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
 {
    setlocale(LC_ALL,"Portuguese");
    char EstCivil;
    float salario;
    printf("Qual o seu Genero\n");
    printf("H=Homem\nM=Mulher\n");
    scanf("%c", &EstCivil);


    switch (EstCivil){
    	case 'M':
        case 'm':
        	printf("Mulheres pagam 10%%, Digige o seu salario\n");
        	scanf("%f",&salario);
        	printf("Você pagará de importo %.2f", salario*0.1);
        	break;
        case 'H':
        case 'h':
        	printf("homens pagam 5%% a mais que as mulheres(pagam 15%%), Digige o seu salario\n");
			scanf("%f", &salario);
        	printf("Você pagará de importo %.2f", salario*0.15);
        	break;
        default:  printf("Genero Incorreto");
        }

    return 0;
}


