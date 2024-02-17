#include <iostream>

using namespace std;

int main()                                                    // Сортировка пузырьком Booble Sort
{
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;
    float num[15]{};                                          // Объявляем массив
    cout << " Enter 15 numbers: " << endl;                    //Вводим данные в массив циклом for
    for (int i = 0; i < 15; i++) {
        cout << ' ';
        cin >> num[i];
    }

    int count = 14;                                           // Инициализируем переменную счётчика кол-ва итераций во вложенном цикле

    for (int k = 0; k < 14; k++) {                            // Цикл для подсчёта итераций
        for (int j = 0; j < count - k; j++) {                 // Вложенный цикл для перемещения большего значения влево а меньшего вправо
            if (num[j] < num[j + 1]) {
                float n;
                n = num[j];
                num[j] = num[j + 1];
                num[j + 1] = n;
            }
        }
    }

    cout << endl;

    for (int r = 0; r < 15; r++) {                           // Выводим результат сортировки
        cout << ' ' << num[r] << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}

//static void quickSort(float sortArr[], int begin, int end) {  // Быстрая сортировка Quick Sort
//    
//    if (sortArr == 0 || begin >= end) return;                 // Завершить,если массив пуст или уже нечего делить
//
//    
//    int middle = begin + (end - begin) / 2;                   // Выбираем опорный элемент
//    float border = sortArr[middle];
//
//    int i = begin, j = end;                                   // Разделияем на подмассивы и меняем местами
//    while (i <= j) {
//        while (sortArr[i] > border) i++;
//        while (sortArr[j] < border) j--;
//        if (i <= j) {
//            float swap = sortArr[i];
//            sortArr[i] = sortArr[j];
//            sortArr[j] = swap;
//            i++;
//            j--;
//        }
//    }
//
//    if (begin < j) quickSort(sortArr, begin, j);              // Рекурсия для сортировки левой и правой части
//    if (end > i) quickSort(sortArr, i, end);
//}
//
//int main() {
//    system("color 80");
//    cout << endl;
//        float sortArr[15]{};                                 // Объявляем массив
//        cout << " Enter 15 numbers: " << endl;               // Вводим данные в массив циклом for
//        for (int i = 0; i < 15; i++) {
//            cout << ' ';
//            cin >> sortArr[i];
//        }
//    quickSort(sortArr, 0, 14);                               // Запускаем сортировку Quick Sort
//    cout << endl;
//    for (int i = 0; i < 15; i++) {                           // Выводим результат
//        cout << ' ' << sortArr[i] << endl;
//    }
//    system("pause>nul");
//    return 0;
//}