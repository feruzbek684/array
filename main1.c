#include <stdio.h>
#include <stdlib.h>
#include <time.h>
///==================================================
int resive_array(int arr[], int size);
int print_array (int arra[], int size);
int output_index(int array[], int size);
///==================================================
int main () {
    int n ; printf("n: ");
    scanf("%d", &n);
    int serya[n];
    resive_array(serya, n);
    print_array(serya, n);
    int soni = output_index(serya, n);
    printf("\n%d ta son bor", soni);
}


///=====================================================

int resive_array(int arr[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}


///======================================================
int print_array (int arra[], int size){
    printf("qiymatlar ==> \n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arra[i]);
    }
}


///======================================================
int output_index(int array[], int size){
    int kichik = array[0], index = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] < kichik)
        {
            kichik = array[i];
            index  = i;
        }
        
    }

    return index;
}