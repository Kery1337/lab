#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
int counter = 0;

void CreateCombinations(int n, char* currentCombination);
bool CheckCombinations(char* combination);

int main()
{SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    printf("Введiть кiлькiсть розрядiв: ");
    int n;
    scanf("%d", &n);

    CreateCombinations(n, "");
    printf("%d\n", counter);

    return 0;
}

void CreateCombinations(int n, char* currentCombination)
{
    if (strlen(currentCombination) == n)
    {
        if (CheckCombinations(currentCombination))
        {
            counter++;
        }
    }
    else
    {
        char tmp[] = { '5', '9' };
        int tmpLength = sizeof(tmp) / sizeof(tmp[0]);

        for (int i = 0; i < tmpLength; i++)
        {
            char newCombination[n + 1];
            strcpy(newCombination, currentCombination);
            newCombination[strlen(currentCombination)] = tmp[i];
            newCombination[strlen(currentCombination) + 1] = '\0';

            CreateCombinations(n, newCombination);
        }
    }
}

bool CheckCombinations(char* combination)
{
    int combinationLength = strlen(combination);

    for (int i = 0; i < combinationLength - 2; i++)
    {
        if (combination[i] == combination[i + 1] && combination[i] == combination[i + 2])
        {
            return false;
        }
    }
    return true;
}
