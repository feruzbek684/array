#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int toldir_array(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",  &arr[i]);
    }
}

void chiqar_array(int a[], int uzunligi){
    printf("array elementlari == >  ");
    for (size_t i = 0; i < uzunligi; i++)
    {
        printf("%d\n", a[i]);
    }
    
}

int array_yigindi (int sery[], int size){
    printf("toq sonalar yigindisi  ==>  ");
    int sum = 0;
    for (size_t j = 0; j < size; j++)
    {
        if (sery[j] % 2 != 0)
        {
            sum = sum + sery[j];
        }
        
    }
    printf("==> %d ", sum);
}
int main () {

    int serya[10];

    toldir_array(serya, 10);
    chiqar_array(serya, 10);
    printf("natija:  ");
    array_yigindi(serya, 10);

}