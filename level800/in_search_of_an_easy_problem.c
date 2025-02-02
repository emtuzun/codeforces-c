#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    char result[] = "EASY";
    scanf("%d\n", &n);
    int binary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &binary[i]);
        if (binary[i] == 1)
        {
            strcpy(result, "HARD");
            break;
        }
    }
    printf("%s\n", result);
    return 0;
}