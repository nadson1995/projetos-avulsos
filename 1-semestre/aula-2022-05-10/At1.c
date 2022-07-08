#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int op;
	while(1){
		printf("Digite sua senha de 4 digitos");
		scanf("%d",&op);
	if(op!=1234){
	printf("Senha incorreta");
	 }
	else{
		printf("Senha correta, Sistema liberado");
		break;
	}
	}
	return 0;
}
