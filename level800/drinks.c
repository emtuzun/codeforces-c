#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    printf("%f\n", ((double)sum) / ((double)n));
    return 0;
}