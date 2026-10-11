#include<stdio.h>
int main(){
    char op;
    int a,b;
    printf("Select a operation:\n +,-,*,/,%% ");
    scanf("%c", &op);
    printf("Enter any two numbers:");
    scanf("%d %d", &a,&b);

    switch (op) {
    case'+':
        printf("%d\n", a+b);
    break;

    case'-':
        printf("%d\n", a-b);
    break;

    case'*':
        printf("%d\n", a*b);
    break;

    case'/':
        if (b!=0){
            printf("%.2f\n", (float)a/b);
        }
        else {
            printf("Invalid operator");
        }
        break;

    case'%':
        if (b!=0){
            printf("%d\n", a%b);
        }
        else {
            printf("Invalid operator");
        }
        break;

    default:
        printf("Invalid operator");

}
return 0;

}


