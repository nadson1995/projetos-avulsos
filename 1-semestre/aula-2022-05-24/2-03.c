#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
float a,b,c,z;
float soma(float a,float b, float c);
printf("Informe o primeiro numero");
scanf("%f",&a);
printf("Informe o segundo numero");
scanf("%f",&b);
printf("Informe o terceiro numero");
scanf("%f",&c);
z=soma(a,b,c);
printf("Soma %f",z);
}

float soma(float a,float b, float c){
return a+b+c;
}
