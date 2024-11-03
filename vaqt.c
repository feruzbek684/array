#include <stdio.h>
#include <windows.h>  // Sleep funksiyasi uchun

int main() {
    printf("Kutish boshlanmoqda...\n");
    
    // 5 soniya kutish (millisekundlarda, shuning uchun 5000ms)
    Sleep(10000);

    printf("Kutish tugadi!\n");

    return 0;
}
