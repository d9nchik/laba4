#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Введіть номер числа Фібоначі: ";
    unsigned int number;
    cin >> number;
    unsigned long int f0 = 0, f1 = 1;
    cout << " 1 член послідовності дорівнює     1" << endl;

    for (unsigned int i = 2; i <= number; i++) {
        unsigned long int temp = f0;
        f0 = f1;
        f1 += temp;
        cout << setw(2) << i << " член послідовності дорівнює " << setw(5) << f1 << endl;
    }

    for (int i = 0; i < 37; i++)
        cout << "*";
    cout << endl;

    cout << "n-не число Фібоначі дорівнює " << f1;

    return 0;
}