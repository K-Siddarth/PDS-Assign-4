#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    switch (n%2)
    {
    case 1:
        printf("It is odd");
        break;
    
    default:
        printf("It is even");
        break;
    }
    return 0;
}