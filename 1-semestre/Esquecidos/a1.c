#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
 {
    setlocale(LC_ALL,"Portuguese");
    char cliente;
    float total;
    printf("Qual o tipo de Cliente\n");
    printf("C=comun\nF=fucionacio\nV=vip\n");
    scanf("%c", &cliente);


    switch (cliente){
    	case 'C':
        case 'c':
        	printf("Cliente comum\n");
        	scanf("%f",&total);
        	printf("Você pagará %.2f", total);
        	break;
        case 'F':
        case 'f':
        	printf("Fucionario\n");
        	scanf("%f",&total);
        	printf("Você pagará %.2f", total*0.95);
        	break;
            case 'V':
            case 'v':
        	printf("Cliente VIP\n");
        	scanf("%f",&total);
        	printf("Você pagará %.2f", total*0.90);
        	break;
        default:  printf("tipo de Cliente incorreto");
        }

    return 0;
}