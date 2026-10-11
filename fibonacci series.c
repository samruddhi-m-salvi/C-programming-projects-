#include <stdio.h>
int main(){
    int i, prev1, prev2, curr, n;
    prev1 = 1;
    prev2 = 0;
    i = 1;

    printf("Enter upto which fibonnaci series is required:");
    scanf("%d", &n);


    while (i <= n){
        if (i==1){
            printf("%d", prev2);
        }
        else if (i==2) {
            printf("%d", prev1);
        }
        else {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr ;
            printf("%d", curr);
        }
    i++;
    }

    return 0;
}





