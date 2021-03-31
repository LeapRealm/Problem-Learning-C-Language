#include <stdio.h>

int main()
{
    int inputMoney, drinkPrice;
    scanf("%d %d", &inputMoney, &drinkPrice);

    int restMoney = inputMoney - drinkPrice;
    int rest500CoinCount = restMoney / 500;
    int tempRestMoney = restMoney % 500;
    int rest100CoinCount = tempRestMoney / 100;

    printf("%d\n", restMoney);
    printf("%d\n", rest500CoinCount);
    printf("%d\n", rest100CoinCount);

    return 0;
}