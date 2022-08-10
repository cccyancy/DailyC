#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int h, m, s;

    // int d = 1000; // 1000 milliseconds delay

    printf("Set time : \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 23 || m > 60 || s > 60)
    {
        printf("Wrong Time Input!\n");
        exit(0);
    }

    while (1) // an infinite loop
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }

        if (h > 23)
        {
            h = 0;
        }

        printf("\n Clock :");
        printf("\n %02d:%02d:%02d\n", h, m, s);
        sleep(1);

        system("clear");
    }
}