#include <stdio.h>

int main(){
	
	int my_array[4] = {1, 2, 3, 4};

	for(int i = 0; i < 4; i++){

		my_array[i] = my_array[i] * 2;

		printf(" %d ", my_array[i]);
	}

	for(int i = 3; i >= 0; i--){
		printf(" %d ", my_array[i]);
	}

	return 0;
}
