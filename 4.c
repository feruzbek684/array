#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {


    srand(time(NULL));
    int n; 
    printf("sonni kirting: ");
    scanf("%d", &n);

    int massiv[n];

    for (size_t l = 0; l < n; l++)
    {
        massiv[l] = rand()%70 +1;
    }

    printf("array : \n" );

    for (size_t j = 0; j < n; j++)
    {
        printf("%d  ", massiv[j]);
    }
    
    
    


}



