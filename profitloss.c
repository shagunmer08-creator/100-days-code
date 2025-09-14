//. Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
#include <math.h>
int main () {
    float cp, sp, profit, loss, profit_perc, loss_perc;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        profit_perc = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_perc);
    } else if (cp > sp) {
        loss = cp - sp;
        loss_perc = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_perc);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
} 