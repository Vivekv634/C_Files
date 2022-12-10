#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter 3 prices in a row with space : ");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);
    price[0] += (0.18 * price[0]);
    price[1] += (0.18 * price[1]);
    price[2] += (0.18 * price[2]);
    printf("Total price : \nPrice 1 : %.3f\nPrice 2 : %.3f\nPrice 3 : %.3f\n", price[0], price[1], price[2]);
    return 0;
}
