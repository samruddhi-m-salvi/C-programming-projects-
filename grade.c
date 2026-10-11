#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    if (marks>=90){
        printf("GRADE:A");
    }
    else if (marks >= 75){
        printf("GRADE:B");
    }
    else if (marks >= 60) {
        printf("GRADE:C");
    }
    else if (marks >= 40) {
        printf("GRADE:D");
    }
    else{
        printf("GRADE:F");
    }

    return 0;
}



