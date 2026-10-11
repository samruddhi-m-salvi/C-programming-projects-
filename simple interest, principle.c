#include <stdio.h>

int main(){
    float I, p, r, t;

    printf("Enter the principle amount:");
    scanf("%f", &p);
    printf("Enter the rate:");
    scanf("%f", &r);
    printf("Enter the time duration:");
    scanf("%f", &t);

    I= p*r*t;

    printf("The Simple Interest is %f", I);

    return 0;


}
