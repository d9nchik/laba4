#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Введіть номер числа Фібоначі: ";
    unsigned int number, f0 = 0, f1 = 1;
    cin >> number;

    for (unsigned int i = 2; i <= number; i++) {
        unsigned long int temp = f0;
        f0 = f1;
        f1 += temp;
    }

    cout << "n-не число Фібоначі дорівнює " << f1;

    return 0;
}