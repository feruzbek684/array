#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 123, b= 345, c = 4567;
    printf("%d", a);
    printf("%d", a);
    printf("%d", a);

    int son = 1234;
    int son1 = 2345;
    int sonlar[5] = {1,2,3,4,5};
    printf("sonlar ==> %d\n", sonlar[0]);
    printf("sonlar ==> %d\n", sonlar[1]);
    printf("sonlar ==> %d\n", sonlar[2]);
    printf("sonlar ==> %d\n", sonlar[3]);
    printf("sonlar ==> %d\n", sonlar[4]);


    int massiv[3][5] = {1,2,3};

    printf("%d\n", massiv [0]);
    printf("%d\n", massiv [1]);
    printf("%d\n", massiv [2]);


int array [10];
printf("sonlar");
for (size_t i = 0; i < 10; i++)
{
    scanf("%d", &array[i]);
}

printf("\n\njuft sonlar ==> ");

for (size_t j = 0; j < 10; j++)
{
    if (array[j] % 2 == 0)
    {
        printf("%d ", array[j]);
    }
    
}





return 0;




} 