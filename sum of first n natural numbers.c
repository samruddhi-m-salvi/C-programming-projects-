#include <stdio.h>
int main(){
    int n, i, sum;
    printf("Enter a number");
    scanf("%d", &n);
    sum = 0;
    for (i =0; i<=n; i++){
        sum += i;
    }
printf("The sum of first %d numbers is %d\n", n, sum);

return 0;
}
