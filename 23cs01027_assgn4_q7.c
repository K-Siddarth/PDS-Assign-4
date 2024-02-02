#include <stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if(age <= 0){
        printf("Not a valid age\n");
        return 0;
    }
    if(age < 5)
        printf("Free ticket\n");
    else if(age < 13)
        printf("Rs 20 for the ticket\n");
    else if(age < 60)
        printf("Rs 50 for the ticket\n");
    else 
        printf("Rs 40 for the ticket\n");
    return 0;
}