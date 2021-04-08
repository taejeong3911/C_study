#include <stdio.h>

int main()
{
	float arr1[7];  //과목 8개


	for (int i = 0; i < 8; i++) {


		scanf_s("%f", &arr1[i]);

	}

	float sum = 0;

	for (int i = 0; i < 8; i++) {

		sum = sum + arr1[i];

	}

	printf("학점은 %.2f", sum/8);


	return 0;
}