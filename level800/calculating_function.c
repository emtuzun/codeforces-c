#include <stdio.h>

int main()
{
    long long int n, sum;
    scanf("%lld", &n);
    if (n%2 == 0)
    {
        sum = n/2;
    }
    else
    {
        sum = n/2 -n;
    }
    printf("%lld\n", sum);
    return 0;
}