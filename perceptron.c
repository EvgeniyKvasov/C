#include <stdio.h>

int main(){
	
	int x1, x2, w1, w2, s;
	
	w1 = 4;
	
	w2 = 2;
	
	printf("Простейшая реализация однослойного перцептрона.\n");
	
	printf("Введите входные данные х1 и х2: \n");
	
	scanf("%d", &x1);
	
	scanf("%d", &x2);
	
	s = x1 * w1 + x2 * w2;
	
	if (s > 3)
		
		printf("Возьми зонт!\n");
		
	else
		
		printf("Зонт не нужен!\n");
	
	return 0;
	
}