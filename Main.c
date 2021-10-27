#include <stdio.h>


int main() {
	int a;
	int arr[20] = {0};
	memset(arr,0,sizeof(arr));

	int index = 0;
	for (;;) {

		scanf_s("%d", &a);
		if (a == -1) break;
		arr[index] = a;
		index++;

	}
	
	printf("%d", countOfTriangle(arr));

} 

int countOfTriangle(int array[]) {

	int size = 0;

	for (int i = 0; i < 20; i++) {
		if (array[i] == 0) break;
		size++;
	}

	int temp;
	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - i - 1; j++){
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
