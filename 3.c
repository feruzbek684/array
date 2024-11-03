#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    system("cls");
    srand(time(NULL));

    int sery[10];
    for (size_t i = 0; i < 10; i++)
    {
        sery[i] = rand()%50;
    }

    printf("\nsonlar\n");
    for (size_t i = 0; i < 10; i++)
    {
     printf("%d ", sery[i]);   
    }
    int katta = sery[0];
    for (size_t i = 0; i < 10; i++)
    {
        if (katta <= sery[i])
        {
            katta  = sery[i];
        }
        
    }
    printf("\n\n katta  son %d", katta);
    
    return 0;    
    
    
}