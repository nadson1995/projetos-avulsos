#include <stdio.h>
#include <stdlib.h>
void func1();
void func2();
void func3();

int main()
{
    printf("Vamos Calcular area de um circulo?\nDigite as auternativas de acordo com a informacao que voce tem\n");
    printf(" 1-Raio\n 2-Diametro\n 3-Circuferencia\n\n");
    int op=0;
    scanf("%d",&op);
    switch(op){
    case 1:
        func1();
        break;
    case 2:
        func2();
        break;
    case 3:
        func3();
        break;

    }
    return 0;
}

void func1(){
    printf("Func1!\n");
    float raio, area,pi;
    printf("Digite o valor do Raio");
    scanf("%f",&raio);
    area=(raio*raio)*pi;
    pi=3.1415;
    printf("Resultado\n");
    printf("%f+%f=%f", raio,pi,area);

}
void func2(){
    printf("Func2!\n");
    printf("Digite o valor do Diametro");

}
void func3(){
    printf("Func3!\n");
    printf("Digite o valor do Circuferencia");

}