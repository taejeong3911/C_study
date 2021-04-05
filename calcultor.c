#include<stdio.h>

int main() {

	int a;
	int b;
	char c;
	scanf_s("%d", &a);
	scanf_s("%c", &c);
	scanf_s("%d", &b);

	if (c == '+') {

		printf("%d + %d = %d", a, b, a + b);


	}

	else if (c == '-') {

		printf("%d - %d = %d", a, b, a - b);


	}

	else if (c == '*') {

		printf("%d * %d = %d", a, b, a * b);


	}

	else if (c == '/') {

		printf("%d / %d = %d", a, b, a / b);


	}









}