#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[100] = {245, 260, 235, 255, 265, 240, 248, 250, 238, 265,
                    270, 255, 230, 245, 260, 248, 235, 268, 252, 245,
                    258, 250, 262, 240, 265, 235, 248, 252, 260, 240,
                    255, 235, 265, 245, 238, 270, 258, 252, 240, 265,
                    245, 260, 250, 232, 265, 245, 238, 268, 255, 250,
                    260, 242, 265, 235, 250, 260, 252, 240, 258, 245,
                    252, 270, 255, 235, 248, 250, 262, 238, 265, 258,
                    242, 265, 245, 230, 255, 265, 240, 248, 260, 252,
                    270, 255, 230, 265, 240, 255, 260, 248, 238, 265,
                    252, 245, 255, 250, 270, 245, 260, 258, 250, 240};

    bubbleSort(arr, 100);

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 100; i++) {
        printf("%4d ", arr[i]);  // Print element with spacing for alignment
        if ((i + 1) % 10 == 0) { // New line after every 10 elements
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
