#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(100 > n || 999 < n)
    {
        printf("Incorrect input");
        return 0;
    }
    int x = n, sum = 0;
    while(x){
        sum += pow(x%10, 3);
        x /= 10;
    }
    if(sum == n)
        printf("Yes %d is an armstrong\n", n);
    else
        printf("No %d is not an armstrong\n", n);
    return 0;
}