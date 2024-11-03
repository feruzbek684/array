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
        massiv[i] = rand()%70 -25;
    }

    printf("array : \n" );

    for (size_t j = 0; j < n; j++)
    {
        printf("%d  ", massiv[j]);
    }
    
    
    


}



