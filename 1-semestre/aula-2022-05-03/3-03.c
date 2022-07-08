#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
 {
     int mult,nub,res;
     for (mult=0;mult<=10;mult++){
         printf("\n");
            for (nub=0;nub<=5;nub++){
                res=mult*nub;
                printf("%d*%d=%d\n",mult,nub,res);
            }
     }
     return 0;
 }
