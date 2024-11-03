#include <stdio.h>
int main()
{
    int array[10];
    printf("sonlar");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n\n  7 ga bolinadigan sonlar ==> ");

    for (size_t j = 0; j < 10; j++)
    {
        if (array[j] % 7 == 0)
        {
            printf("%d ", array[j]);
        }
    }
}