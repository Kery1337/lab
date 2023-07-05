#include <stdio.h>
#include <windows.h>


int nsk(int a, int b) {
    int max = (a > b) ? a : b;          // Функція для знаходження НСК 2 чисел

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

int nsk_3(int a, int b, int c) {// Функція для знаходження НСК 3 чисел
    return nsk(nsk(a, b), c);
}

int nsk_4(int a, int b, int c, int d) {// Функція для знаходження НСК 4 чисел
    return nsk(nsk(nsk(a, b), c), d);
}

int nsk_5(int a, int b, int c, int d, int f) {// Функція для знаходження НСК 5 чисел
    return nsk(nsk(nsk(nsk(a, b), c), d),f);
}

int nsk_6(int a, int b, int c, int d, int f, int g) {// Функція для знаходження НСК 6 чисел
    return nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g);
}

int nsk_7(int a, int b, int c, int d, int f, int g, int h) {// Функція для знаходження НСК 7 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h);
}

int nsk_8(int a, int b, int c, int d, int f, int g, int h, int i) {// Функція для знаходження НСК 8 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i);
}

int nsk_9(int a, int b, int c, int d, int f, int g, int h, int i, int j) {// Функція для знаходження НСК 9 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j);
}

int nsk_10(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k) {// Функція для знаходження НСК 10 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k);
}

int nsk_11(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l) {// Функція для знаходження НСК 11 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l);
}

int nsk_12(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m) {// Функція для знаходження НСК 12 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m);
}

int nsk_13(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n) {// Функція для знаходження НСК 13 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n);
}

int nsk_14(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o) {// Функція для знаходження НСК 14 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o);
}

int nsk_15(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {// Функція для знаходження НСК 15 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p);
}

int nsk_16(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q) {// Функція для знаходження НСК 16 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p), q);
}

int nsk_17(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r) {// Функція для знаходження НСК 17 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p), q), r);
}

int nsk_18(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s) {// Функція для знаходження НСК 18 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p), q), r), s);
}

int nsk_19(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t) {// Функція для знаходження НСК 19 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p), q), r), s), t);
}


int nsk_20(int a, int b, int c, int d, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u) {// Функція для знаходження НСК 20 чисел
    return nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(nsk(a, b), c), d), f), g), h), i), j), k), l), m), n), o), p), q), r), s), t), u);
}

int main()
{SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int i, start_num, num[20], result;

    printf("Введіть кількість чисел: \n");
    scanf("%d", &start_num);
    printf("Введіть числa: \n");
    for(i=1;i<=start_num;i++){
        scanf("%d",&num[i]);}

    switch(start_num){
        case 1:printf("Мінімум два числа\n");break;
        case 2:result = nsk(num[1], num[2]); printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 3:result = nsk_3(num[1], num[2], num[3]); printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 4:result = nsk_4(num[1], num[2], num[3], num[4]); printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 5:result = nsk_5(num[1], num[2], num[3], num[4], num[5]); printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 6:result = nsk_6(num[1], num[2], num[3], num[4], num[5], num[6]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 7:result = nsk_7(num[1], num[2], num[3], num[4], num[5], num[6], num[7]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 8:result = nsk_8(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 9:result = nsk_9(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 10:result = nsk_10(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 11:result = nsk_11(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 12:result = nsk_12(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 13:result = nsk_13(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 14:result = nsk_14(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 15:result = nsk_15(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 16:result = nsk_16(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15], num[16]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 17:result = nsk_17(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15], num[16], num[17]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 18:result = nsk_18(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15], num[16], num[17], num[18]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 19:result = nsk_19(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15], num[16], num[17], num[18], num[19]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
        case 20:result = nsk_20(num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9], num[10], num[11], num[12], num[13], num[14], num[15], num[16], num[17], num[18], num[19], num[20]);
            printf("Найменше спільне кратне для цих чисел: %d\n", result); break;
    }

    return 0;
}