#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter any 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);

    float avg;
    avg =(float)(a + b + c)/3;

    printf("The average is %f",avg);
    return 0;


}

