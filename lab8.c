#include <stdio.h>
#include <windows.h>

// Функція для обчислення факторіалу
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
// Функція для обчислення кількості анаграм для слова
int anagrams(char slovo[]) {
    int length = 0;
    int freq[256] = {0}; // Масив для підрахунку входжень кожної букви

    // Обчислення довжини слова
    while (slovo[length] != '\0') {
        length++;
    }

    // Розрахунок входжень кожної букви в слово
    for (int i = 0; i < length; i++) {
        freq[slovo[i]]++;
    }

    // Розрахунок добутку факторіалів кількостей входжень кожної букви
    int frequency_factorial = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            frequency_factorial *= factorial(freq[i]);
        }
    }

    // Розрахунок кількості анаграм
    int total_anagrams = factorial(length) / frequency_factorial;

    return total_anagrams;
}

int main()
{ SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    char word[100];

    // Запитати користувача про слово
    printf("Введіть слово: ");
    scanf("%s", word);

    // Вивести кількість анаграм для заданого слова
    int result = anagrams(word);
    printf("Кількість анаграм: %d\n", result);

    return 0;
}