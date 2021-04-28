#include<stdio.h>

unsigned int rec_sum(unsigned int i) {

	unsigned int sum;

	if (i == 0) sum = 0;
	else sum = rec_sum(i - 1) + i;
	return sum;



}



int main() {
	
	int num;
	num = rec_sum(5);

	printf("%d", num);

}