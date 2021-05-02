#include<Stdio.h>
#define MAX_ARR_SIZE 10
int main(){
	int my_num = 100;
	char my_alph = 'A';


	printf("%p %p\n", &my_num, &my_alph);


	int* num_p = &my_num;
	char* alph_p = &my_alph;

	printf("%p %p-->", num_p, alph_p);
	printf("%p %p\n", num_p + 1, alph_p + 1);
	
	int arr1[MAX_ARR_SIZE] = { 0 };
	char arr2[MAX_ARR_SIZE] = { 0 };	

	for (int i = 0; i < 10; i++) {
	
		arr1[i] = 100 + i;
		arr2[i] = 65 + i;

		printf("%d   %c\n", arr1[i], arr2[i]);
	}
	
	int arr1_p = &arr1;
	int arr2_P = &arr2;

	printf("%p %p ---> %p %p", &arr1_p, &arr2_P, &arr1_p + 1, &arr2_P +1);



	return 0;
}