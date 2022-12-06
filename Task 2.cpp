#include <iostream>
#include <string>

using namespace std;

int main() {
    //Друге завдання, задача перша
    int number;

    cout << "Введіть номер студента: ";
    cin >> number;

    switch (number) {
    case 1: cout << "1, Аксьонов Михайло"; break;
    case 2: cout << "2, Борисюк Катерина"; break;
    case 3: cout << "3, Буханчук Богдан"; break;
    case 4: cout << "4, Гавриленко Богдан"; break;
    case 5: cout << "5, Гладка Олена"; break;
    case 6: cout << "6, Гриньов Тимофій"; break;
    case 7: cout << "7, Дмитрієва Анастасія"; break;
    default: cout << "Студента за номером "<< number << " не знайдено";
    }

    return 0;
}