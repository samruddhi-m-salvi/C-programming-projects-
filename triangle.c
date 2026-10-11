#include <stdio.h>
int main(){
    int count, n, num, i;
    printf("Enter a number:");
    scanf("%d", &num);

    count = 0;
    n = num-1;
    if (num<=1){
        printf("It is not a prime number.");
    }


    for (i=2; i<=n; i++){
        if (num%i == 0){
            count++;
            break;
        }
    }
    if (count==0) {
        printf("It is a prime number");
    }
    else{
        printf("It is not a prime number");
    }
return 0;
}

