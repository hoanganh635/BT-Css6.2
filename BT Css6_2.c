#include <stdio.h>

int main() {
    int arr[5];
    int even_count = 0, odd_count = 0;

    // Nhap 5 so nguyen tu nguoi dung
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Dem so luong so chan va so le
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // In ket qua
    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}