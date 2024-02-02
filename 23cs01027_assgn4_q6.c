#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the 2 numbers: ");
    scanf("%d%d", &a, &b);
    char operation;
    printf("Enter the operation: (+, *, -, /): ");
    getchar();
    scanf("%c", &operation);
    printf("\n");
    switch(operation){
        case '+':
            printf("Addition: %d", a + b);
            break;
        case '-':
            printf("Subtraction: %d",a-b);
            break;
        case '*':
            printf("Multiplication: %d", a * b);
            break;
        case '/':
            printf("Division: %.1f",(float)a/b);
            break;
        default:
            printf("Incorrect operation");
            break;
    }
    return 0;
}