#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p[n];
    int result[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        result[p[i]-1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]+1);
    }
    printf("\n");
    return 0;
}