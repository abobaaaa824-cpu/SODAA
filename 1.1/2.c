#include  <iso646.h>
#include <stdio.h>
#include <time.h>

float priklad(float a) {
	float y = -4 * a * a * a + 3 * a - 7;
	return y;
}

static void none() {
	printf("None\n");
}


int main() {
	float x;
	float y;
	printf("Enter x: ");
	scanf("%f", &x);

	if (x <= 7 and x >= 2) {
		float y = x * x * x + 14;
		printf("y = %f\n", y);
	}
	else if ((x > -13 and x <= -3) or x > 14) {
		y = priklad(x);
		printf("y = %f\n", y);
	}	
	else {
		none();
	}

	return 0;
}
