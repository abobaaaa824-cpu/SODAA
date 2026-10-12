#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double P = 1.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double sum = 0.0f;
        for (int j = 1; j <= i; j++)
        {
            sum += sin(j) + 1;
        }
        P *= sum / (i * (i + 1));
    }
    printf("%.7f\n", P);



    return 0;
}