#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Введіть номер числа Фібоначі: ";
    unsigned int number;
    unsigned int f0 = 0;//Член послідовності n
    unsigned int f1 = 1; //Член послідовності n+1

    cin >> number;

    for (unsigned int i = 2; i <= number; i++) {
        unsigned int temp = f0;//Змінна для усунення втрати числа
        f0 = f1;
        f1 += temp;
    }

    cout << "n-не число Фібоначі дорівнює " << f1;

    return 0;
}