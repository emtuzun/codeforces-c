#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    int result[t];
    int n[t][5];
    for (int i = 0; i < t; i++)
    {
        int counter_1 = 1;
        int counter_2 = 1;
        scanf("%d %d %d %d", &n[i][0], &n[i][1], &n[i][3], &n[i][4]);
        n[i][2] = n[i][0] + n[i][1];
        for (int j = 0; j < 2; j++)
        {
            if (n[i][j+3] == n[i][j+2] + n[i][j+1])
            {
                counter_1++;
            }
        }
        n[i][2] = n[i][4] - n[i][3];
        for (int j = 0; j < 2; j++)
        {
            if (n[i][j+2] == n[i][j+1] + n[i][j])
            {
                counter_2++;
            }
        }
        result[i] = counter_2;
        if (counter_1 > counter_2)
        {
            result[i] = counter_1;
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}