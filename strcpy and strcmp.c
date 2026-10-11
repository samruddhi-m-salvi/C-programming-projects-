#include <stdio.h>
#include <string.h>
int main(){

char name1[20];
char name2[20];
char result[50];
printf("Enter first string: \n");
scanf("%s", name1);
printf("Enter second string: \n");
scanf("%s", name2);

strcpy(result, name1);
strcat(result, name2);

printf("Result = %s\n", result);

if ( strcmp ( name1 , name2 ) == 0)
printf (" Strings are equal \n");
else
printf (" Strings are not equal \n");

return 0;

}
