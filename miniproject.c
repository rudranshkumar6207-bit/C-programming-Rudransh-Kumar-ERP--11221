#include <stdio.h>

float getBillAmount(float rate[], int qty[], int n)
{
    float sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum = sum + (rate[i] * qty[i]);
    }

    return sum;
}

int main()
{
    int i;
    float amount;

    float foodPrice[5] = {120, 80, 150, 60, 100};
    int foodQty[5];

    printf("\n----- FOOD ORDER MENU -----\n");
    printf("1. Burger       Rs.120\n");
    printf("2. Pizza        Rs.80\n");
    printf("3. Sandwich     Rs.150\n");
    printf("4. French Fries Rs.60\n");
    printf("5. Cold Drink   Rs.100\n");

    printf("\nEnter quantity for each item:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &foodQty[i]);
    }

    amount = getBillAmount(foodPrice, foodQty, 5);

    printf("\n---------------------------\n");
    printf("Total Payable Amount = Rs. %.2f\n", amount);
    printf("---------------------------\n");

    return 0;
}