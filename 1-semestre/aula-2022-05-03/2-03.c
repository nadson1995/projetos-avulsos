#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
 {
     int mult,nub,res;
		printf("Informe o numero que sera calculado a tabuada");
		scanf("%d",&nub);
     for (mult=0;mult<=10;mult++){
			res=nub*mult;
			printf("%d*%d=%d\n",nub,mult,res);



     }
     return 0;
 }
