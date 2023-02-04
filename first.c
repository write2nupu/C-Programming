#include <stdio.h>

int main() {
	float a;

	printf("Enter side of circle ");
	scanf("%f", &a);

	int sq=3.14*a*a;

	printf("Area of circle is %f", sq);
	return 0;
}
