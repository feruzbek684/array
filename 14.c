#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int radom_array(int arr[], int s){
    srand(time(NULL));
    for (size_t i = 0; i < s; i++)
    {
        arr[i] = rand()%10;
    }
}

void print_random_array(int arra[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        printf("%d  ", arra[i]);
    }
    
}
int index_osish_tartibda_sortlash(int array[], int size, int index) {
    int vaqtincha = 0;
    for (size_t i = 0; i < index; i++)
    {
        for (size_t j = 0; j < index; j++)
        {
            if (array[j] > array[j + 1])
            {
                vaqtincha = array[j];
                array[j] = array[j + 1];
                array[j + 1] = vaqtincha;
            }
        }
    }
}


int main () {
    int n;
    printf("n kiriting: ");
    scanf("%d", &n);
    int arr[n];

    radom_array(arr, n);
    print_random_array(arr, n);
    int ixtiyoriy;
    printf("\n\n%d index gacha bolgan ixtiyoriy son ", n);
    scanf("%d", &ixtiyoriy);
    index_osish_tartibda_sortlash(arr, n, ixtiyoriy);
    printf("\n\toxirgi natija 1 \n");
    print_random_array(arr, n);

    int vaqtincha2 = 0;
    for (size_t i = ixtiyoriy + 1; i < n; i++)
    {
        for (size_t j = ixtiyoriy + 1; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                vaqtincha2 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = vaqtincha2;
            }
            
        }
        
    }

    printf("\n\n\t oxirgi natija 2 \n");
    print_random_array(arr, n);
    

    return 0;
}