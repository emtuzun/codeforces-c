#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p[n], q[n];
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i], &q[i]);
        if (1 < q[i] - p[i])
        {
            result++;
        } 
    }
    printf("%d\n", result);
    return 0;
}