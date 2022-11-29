#include <stdio.h>

int calcPrice();
int main()
{
    int price;
    printf("Enter the total price : ");
    scanf("%d", &price);
    printf("Total price after including GST is %d", calcPrice(price));
    return 0;
}

int calcPrice(int num){
    int value = num + num*0.18;
    return value;
}
