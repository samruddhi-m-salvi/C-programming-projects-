#include <stdio.h>
#include <string.h>
int main(){
char input[50];
int n, i;
char temp;

printf("Enter your input: \n");

fgets(input, sizeof(input), stdin);

printf("The length of the string is: %d\n ", strlen(input));

n = strlen(input);

for (i=n-1; i>=0; i--)
{
printf("%c" , input[i]);

}

return 0;


}
