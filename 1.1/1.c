#include <time.h>
#include <stdio.h>


float static priklad(float a) {

	float y = -4 * a * a * a + 3 * a - 7;
	return y;
}

static void none() {
	printf("None\n");
}


int main() {
	float x;
	printf("Enter x: ");
	scanf("%f", &x);
	clock_t start = clock();

	if (x <= 7) {
		if (x >= 2) {
			float y = x * x * x + 14;
			printf("%f\n", y);
		}
		else if (x <= -3) {
			if (x > -13) {
				float y = priklad(x);
				printf("%f\n", y);
			}
			else {
				none();
			}


		}
	}
	else if (x > 14) {
		float y = priklad(x);
		printf("%f\n", y);
	}
	else {
		none();
	}
	clock_t end = clock();
	printf("Time: %.3f seconds\n",
	   (double)(end - start) / CLOCKS_PER_SEC);
	return 23;
}