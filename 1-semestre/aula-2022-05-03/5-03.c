#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
     int x, idade;
     int p18=0, p018=0;

     for (x=0;x<10;x++){
		printf("Quantos anos voce tem?");
		scanf("%d", &idade);
		if (idade>=18){
			(p18++);
		}
		else{
			(p018++);
		}

     }
     printf("A quantidade de pessoas maior que 18 e %d\n", &p18);
     printf("A quantidade de pessoas menor que 18 e %d\n", &p018);
     }
