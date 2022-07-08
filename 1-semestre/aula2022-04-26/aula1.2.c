

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
 {
     float valor,soma=0;
     int x=0;
     while (x<5){
			printf("Digite o numero\n");
			scanf("%f",&valor);
			soma=soma+valor;
			x=x+1;
     }
     printf("soma %.2f",soma);
     return 0;
 }
