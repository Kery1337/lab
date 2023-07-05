#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int t1, t2, t3; //кількість часу, щоб з'їсти тортик
    float t_ser, t_3; // додадаткові змінні

    printf("введіть три значення: \n"); //вводимо значення
    scanf("%d",&t1);
    scanf("%d",&t2);
    scanf("%d",&t3);

    t_ser = (t1 + t2 + t3)/3;//знаходимо середнє значення
    t_3 = t_ser/3;

    printf("Час необхідний для з'їдання пирога: %.2f годин",t_3);


    return 0;
}