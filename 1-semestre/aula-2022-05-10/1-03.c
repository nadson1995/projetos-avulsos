#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Calculadora IMC

void banner();
float IMC(float peso, float altura);

float main(){
float peso,altura,imc;
banner();
printf("Digite seu peso em quilos:");
scanf("%f",&peso);
printf("Digite sua altura em metros com ponto:");
scanf("%f",&altura);
imc=IMC(peso,altura);
printf("Seu IMC e %.2f\n\n\n",imc);
banner();
}

void banner(){
printf("###################\n");
printf("Calculadora de IMC\n");
printf("###################\n\n");
}

float IMC (float peso, float altura){
float imc;
imc=peso/(altura*altura);
return imc;
}