#include<stdio.h>
void picture() {
	int x;
	printf("Enter number (more than 1): ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			printf(" * ");
		}
		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}

		printf("\n");
	}
}
void picture2() {
	int x;
	printf("Enter number (more than 1): ");
	scanf_s("%d", &x);
	printf("\n\n");
	for (int i = 1; i <= x; i++) {
		for (int j = x; j >= i; j--) {
			printf(" * ");
		}

		for (int j = 1; j <= x; j++) {
			printf(" * ");
		}
		printf("\n");
	}
}
int main() {
	picture();
	printf("\n");
	picture2();
	return 0;
}