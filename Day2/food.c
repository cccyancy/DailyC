#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

int main()
{
    int n;
    printf("how many meal you have?\n");
    scanf("%d", &n);
    fflush(stdin); // scanf has stored value, if not clean, it will skip next scanf.

    int i;

    char food[n][14];

    char str[100];

    for (i = 0; i < n; i++)
    {
        printf("what are the meals?\n");

        scanf("%[^\n]%*c", str);

        strcpy(food[i], str);
    }

    srand(time(NULL));
    int r = rand();

    printf("\nYou Should Get:%s\n", food[r % 3]);

    return 0;
}