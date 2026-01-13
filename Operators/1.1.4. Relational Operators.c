#include <stdio.h>

int main() {
	int a, b;

	// prompt for input
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	// print comparison with result
	printf("%d < %d: %s\n", a, b, (a < b) ? "True" : "False");
	printf("%d <= %d: %s\n", a, b, (a <= b) ? "True" : "False");
	printf("%d > %d: %s\n", a, b, (a > b) ? "True" : "False");
	printf("%d >= %d: %s\n", a, b, (a >= b) ? "True" : "False");
	printf("%d == %d: %s\n", a, b, (a == b) ? "True" : "False");
	printf("%d != %d: %s\n", a, b, (a != b) ? "True" : "False");

	return 0;
}