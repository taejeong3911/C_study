#include<stdio.h>
int main() {
	int i = 1;
	int input;
	scanf_s("%d", &input);
	do {

		int j = 1;
		while (j < input) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}


	while (i < input); {
		
		printf("\n");
	}
}