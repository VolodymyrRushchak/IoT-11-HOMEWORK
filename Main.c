#include <stdio.h>
#define SIZE 20


int main() {
	int array[SIZE] = {0};
	memset(array,0,sizeof(array));

	int number;
	for (int index = 0;  ; index++) {    //condition is missed, because program dont know how many numbers user want to enter

		scanf_s("%d", &number);
		if (number == -1) break;
		array[index] = number;

	}
	
	printf("%d", countOfTriangle(array));

} 

int countOfTriangle(int array[]) {

	int temp;
	for (int i = 0; i < SIZE - 1; i++){			//sorting array with bubble method	
		for (int j = 0; j < SIZE - i - 1; j++){
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}							
	}

	int triCount = 0;

	int max;
	for (int i = 0; i < size-2; i++){
		for (int j = i+1; j < size-1; j++){
			for (int k = j+1; k < size; k++)
			{
				if (array[k] < array[i] + array[j]) 
					triCount++;
			}
		}
	}

	return triCount;
	
}
