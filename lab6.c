#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
{ SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int x1, y1, x2, y2;     //координати першого вектора
    float dx, dy, result;   //координати другого вектора
    printf("Введіть координати першого вектора:\n");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("Введіть координати другого вектора:\n");
    scanf("%d",&x2);
    scanf("%d",&y2);
    dx = x2 - x1;
    dy = y2 - y1;
    result = sqrt(dx*dx + dy*dy);   //обчислення по формулі
    printf("Довжина вектора: %.6f\n", result);
    return 0;
}
