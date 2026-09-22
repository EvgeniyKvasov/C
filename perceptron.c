#include <stdio.h>

int main(){
	
	int x1, x2, w1, w2, s, b, a; // x - факты, w - веса, s - сумма, b - смещение, a - для оператора switch
	
	w1 = 4;
	
	w2 = 2;
	
	b = -3; // смещение, чтобы сравнивать s с 0
	
	printf("Простейшая реализация однослойного перцептрона.\n");
	
	printf("Введите входные данные х1 и х2: \n");
	
	scanf("%d", &x1);
	
	scanf("%d", &x2);
	
	s = x1 * w1 + x2 * w2 + b;
	
	if (s > 0)
		
		printf("Возьми зонт!\n");
		
	else
		
		printf("Зонт не нужен!\n");
		
	printf("Был ли в итоге дождь? Ответь 1 (да) или 0 (нет).\n");
	
	scanf("%d", &a);
	
	switch(a){
		
		case 0:
		
			printf("Предсказание перцептрона верно?  Ответь 1 (да) или 0 (нет).\n");
			
			scanf("%d", &a);
			
			switch(a){
				
				case 0:
				
					printf("Ошибка, переобучим перцептрон!\n");
					
					s = - 1; // новая сумма
					
					w1 = w1 - 1; // новый вес
					
					b = b - 1; // новый биас
					
					printf("%d\n", s);
					
					printf("%d\n", w1);
					
					printf("%d\n", b);
					
					break;
					
				case 1:
		
					printf("Все верно!\n");
					
					break;
					
			}
		
			break;
		
		case 1:
		
			printf("Предсказание перцептрона верно?  Ответь 1 (да) или 0 (нет).\n");
			
			scanf("%d", &a);
			
			switch(a){
				
				case 0:
				
					printf("Ошибка, переобучим перцептрон!\n");
					
					break;
					
				case 1:
		
					printf("Все верно!\n");
					
					break;
					
			}
		
			break;
		
	}
	
	return 0;
	
}