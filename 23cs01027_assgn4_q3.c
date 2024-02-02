
#include <stdio.h>

int main(){
    int score, balance;
    printf("Enter the score and the balance: ");
    scanf("%d%d", &score, &balance);
    int rate;
    if(score< 600)  
        rate = 15;
    else if(score <= 750)
        rate = 12;
    else
        rate = 10;
    float interest = (balance * rate)/ 100;
    printf("Interest is %.1f\n", interest);
    return 0;
}