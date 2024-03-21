#include <stdio.h>

struct Lados{
	float a;
	float b;
};

struct Lados criarLado(float x, float y){
	
	struct Lados lado;
	lado.a = x;
	lado.b = y;
	return lado;
}

float calcPerimetro(struct Lados lado){
	return 2*(lado.a) + 2*(lado.b);
}

float calcArea(struct Lados lado){
	return lado.a * lado.b;
}

void imprimir(struct Lados lado){
	printf("Comprimento: %.1f\nLargura: %.1f\n", lado.a, lado.b);
}

int main(){
	
	struct Lados lado1 = criarLado(5,3);
	float perimetro = calcPerimetro(lado1);
	float area = calcArea(lado1);
	
	imprimir(lado1);
	printf("O perimetro do retangulo vale: %.1f\n", perimetro);
	printf("A area do retangulo vale %.1f", area);
	
	return 0;
}

