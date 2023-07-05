#include <stdio.h>
#include <windows.h>
int main()
{SetConsoleCP(65001);
SetConsoleOutputCP(65001);
    int n,m,i=0;  //n - натуральне число,,m - рівний дільник,i - кількість рівних дільників
    printf("Введіть натуральне число n: ");
    scanf("%d",&n);
    for(m=1;m<=n;m++){
        if(n % m == n / m) i++; // цикл перевіряє число, якщо умова виконується правильно30, то i - збільшується
        else continue;
    }
    printf("Кількість рівних дільників числа %d: %d", n,i);

    return 0;
}


