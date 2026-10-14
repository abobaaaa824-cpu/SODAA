#include <stdio.h>
#include <math.h>


void printArray(const char* name, int arr[], int u) {
    printf("%s: ", name);

    for (int i = 0; i < u; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int a;
    int b;
    int r;
    unsigned int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    int y[n];
    int z[n];
    int c[n];
    for (int i = 0; i < n; i++) {
        y[i] = -30 + 5 * i;
    }
    for (int i = 0; i < n; i++) {
        if (-20 < y[i] && y[i] < 10) {
            z[i] = 1 - a * y[i];
        }
        else {
            z[i] = 7 - b * y[i];
        }
    }
    for (int i = 0; i < n; i++) {
        c[i] = pow(-1, i) * b + z[i];
    }

    r = c[0];

    for (int i = 1; i < n; i++) {
        if (c[i] > r) {
            r = c[i];
        }
    }

    printArray("Y", y, n);
    printArray("Z", z, n);
    printArray("R", c, n);


    printf("MAX: %d", r);

    return 0;
}
