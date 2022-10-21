#include <stdio.h>

int main(){
    char first_name[30];
    char last_name[30];
    printf("Enter first and last name: ");
    scanf("%29s %29s", first_name, last_name);
    printf("First: %s Last: %s", first_name, last_name);
    return 0;
}