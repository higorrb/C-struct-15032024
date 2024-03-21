#include <stdio.h>
#include <math.h>

struct Point{
	float x;
	float y;
	
};


struct Point createPoint(float x, float y){
	
		struct Point p;
		
		p.x= x;
		p.y = y;
		return p;
}

float distance(struct Point p1, struct Point p2){
	
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	
}

void printPoint(struct Point p){
	
	printf("Coordenadas: (%.2f, %.2f)\n",p.x, p.y);
}

int main(){
	
	printf("Inicio\n");
	
	struct Point p1 = createPoint(3.0, 4.0);
	struct Point p2 = createPoint(6.0, 8.0);
	
	printf("P1: ");
	printPoint(p1);
	printf("P2: ");
	printPoint(p2);
	
	printf("Resultado: %.2f", distance(p1,p2));
	
	return 0;
}

