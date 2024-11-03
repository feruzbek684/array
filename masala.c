#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {


    srand(time(NULL));
    int n; 
    printf("sonni kirting: ");
    scanf("%d", &n);

    int massiv[n];
    for (size_t i = 0; i < n; i++)
    {
        massiv[i] = rand()%100 -50;
    }

    printf("array : \n" );

    for (size_t j = 0; j < n; j++)
    {
        printf("%d  ", massiv[j]);
    }

    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        array[i] = rand()%100 -70;
    }

    printf("manfiy: ");
    for (size_t q = 0; q < n; q++)
    {
        printf("%d ", array[q]);
    }
    
    
    
    
    


}



