#include <stdio.h>

int main() {
    int arr[6] = {34, 12, 89, 5, 67, 23};
    int i, min = arr[0], max = arr[0], sindex, lindex;

    for (i = 0; i < 6; i++) {
        if (arr[i] < min) {
            min = arr[i];
            sindex = i;
        }

        if (arr[i] > max) {
            max = arr[i];
            lindex = i;
        }
    }

    printf("MINIMUM element is %d found at index %d\n", min, sindex);
    printf("MAXIMUM element is %d found at index %d\n", max, lindex);

    return 0;
}

