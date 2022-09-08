/* Funções e variáveis */
#include <stdio.h>

int add(int a, int b){
	int x = a+b;
	return x;
}

int sub(int a, int b){
	int x = a-b;
	return x;
}
int mult(int a, int b){
	int x = a*b;
	return x;
}

int div(int a, int b){
	int x = a/b;
	return x;
}

int getNumber(){
	int number;
	printf("Digite um número inteiro:");
	scanf("%d",&number);
	return number;
}


int menu(){
	int op;
	printf("__________________\n");
	printf("1 - Adição\n");
	printf("2 - Subtração\n");
	printf("3 - Multiplicação\n");
	printf("4 - Divisão\n");
	printf("__________________\n");
	printf("Escolha a opção desejada:");
	scanf("%d",&op);
	return op;
}


int main(void) {
	int valor1, valor2, addR,subR, multR, divR, op;
	printf("Calculadora de Inteiros \n");
	valor1 = getNumber();
	valor2 = getNumber();

	op = menu();

	switch(op){
		case 1:
			addR = add(valor1,valor2);
		  printf("Adição: %d \n", addR);
			break;
		case 2:
			subR = sub(valor1,valor2);
	  	printf("Subtração: %d \n", subR);
			break;
		case 3:
			multR = mult(valor1,valor2);
	  	printf("Multiplicação: %d \n", multR);
			break;
		case 4:
			divR = div(valor1,valor2);
	  	printf("Divisão: %d \n", divR);
			break;
	}
  return 0;
}

