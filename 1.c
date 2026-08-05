#include <stdio.h>

int combination[100];

void generateCombinations(int start, int index, int n, int k)
{
    if(index == k)
    {
        printf("{");

        for(int i = 0; i < k; i++)
        {
            printf("%d", combination[i]);

            if(i != k - 1)
                printf(" ");
        }

        printf("}\n");
        return;
    }

    for(int i = start; i <= n; i++)
    {
        combination[index] = i;

        generateCombinations(i + 1, index + 1, n, k);
    }
}

int main()
{
    int n, k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k > n || k < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("\nAll Combinations are:\n");

    generateCombinations(1, 0, n, k);

    return 0;
}