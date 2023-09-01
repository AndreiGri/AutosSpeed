#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int distance = 200;
    int time = 2;
    int speed = 0;

    cout << "Введите скорость автомобиля: ";
    cin >> speed;

    if (speed * time < distance) {
        cout << "Вы проехали " << speed * time << " километров." << endl;
    }
    else {
        cout << "Вы приехали!" << endl;
    }

    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}