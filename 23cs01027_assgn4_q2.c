#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int max;
    if(a >= b)
        max = a;
    else
        max = b;
    if(max >= c)
        printf("The max is : %d\n", max);
    else
        printf("The max is : %d\n", c);
    return 0;
}