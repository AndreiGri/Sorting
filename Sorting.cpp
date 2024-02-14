#include <iostream>

using namespace std;

int main()
{
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;
    float num[15];                          // Объявляем массив
    cout << " Enter 15 numbers: " << endl;  //Вводим данные в массив циклом for
    for (int i = 0; i < 15; i++) {
        cout << ' ';
        cin >> num[i];
    }

    int count = 14;                         // Инициализируем переменную счётчика

    for (int k = 0; k < 14; k++) {          // Цикл для подсчёта итераций
        for (int j = 0; j < count; j++) {   // Вложенный цикл для перемещения большего значения влево а меньшего вправо
            if (num[j] < num[j + 1]) {
                float n;
                n = num[j];
                num[j] = num[j + 1];
                num[j + 1] = n;
            }
        }
        count--;                           // Счётчик уменьшаем на один т.к. проверка последнего меньшего значения не нужна
    }

    for (int r = 0; r < 15; r++) {         // Выводим результат сортировки
        cout << '|' << num[r] << '|' << ' ';
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}