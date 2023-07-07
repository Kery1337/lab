#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{ SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int x1, y1, r1, x2, y2, r2;    //Значення центрів кіл та їх радіусів
    float length;                  //Значення довжини між центрами
    printf("Введіть координати центра першого кола:\n");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("Введіть радіус першого кола:\n");
    scanf("%d",&r1);
    printf("Введіть координати центра другого кола:\n");
    scanf("%d",&x2);
    scanf("%d",&y2);
    printf("Введіть радіус другого кола:\n");
    scanf("%d",&r2);
    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));   //обчислення довжини між центрами
    if(abs(r1 - r2) < length < (r1 + r2)) printf("Кількість точок перетину: 2\n");
    else if(abs(r1 - r2) <= length <= (r1 + r2)) printf("Кількість точок перетину: 1\n");
    else printf("Кількість точок перетину: 0\n");
    
    return 0;
}
