#include <stdio.h>

int main() {

    int i, n, arr[4];
    printf("Enter 5 inputs for the array:\n");

    int sum = 0;
    float avg;

    for (i=0; i<5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];

    }
    avg = (float)sum/5;

    printf("Sum: %d\n", sum);
    printf("Average: %f\n", avg);

    printf("\n");
    return 0;

}

