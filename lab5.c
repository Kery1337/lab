#include <stdio.h>
#include <windows.h>
int main()
{ SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int dp[10000], n, i;    //n- довжина, i - для циклу, dp - масив
    dp[0] = 1; dp[1] = 2; dp[2] = 3;    //Початкові значення
    printf("Введіть довжину послідовностей n:\n");
    scanf("%d",&n);
    for(i=3;i<=n;i++){        //Аби отримати кількість послідовностей,
        dp[i] = dp[i-1] + dp[i-2];} //потрібно додати дві попередні кількості
    printf("Кількість шуканих послідовностей: %d\n", dp[n]);

    return 0;
}