#include <iostream>
#include <complex>
using namespace std;

int add(int a, int b) {
    return a + b;
}

complex<double> add(complex<double> a, complex<double> b) {
    return a + b;
}

int main() {
    char choice;
    do {
        cout << "Выберите тип данных для сложения: " << endl;
        cout << "a) Целые числа" << endl;
        cout << "b) Комплексные числа" << endl;
        cout << "q) Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;
        
        switch (choice) {
            case 'a': {
                int x, y;
                cout << "Введите первое целое число: ";
                cin >> x;
                cout << "Введите второе целое число: ";
                cin >> y;
                cout << "Сумма равна: " << add(x, y) << endl;
                break;
            }
            case 'b': {
                double real1, imag1, real2, imag2;
                cout << "Введите действительную часть первого комплексного числа: ";
                cin >> real1;
                cout << "Введите мнимую часть первого комплексного числа: ";
                cin >> imag1;
                cout << "Введите действительную часть второго комплексного числа: ";
                cin >> real2;
                cout << "Введите мнимую часть второго комплексного числа: ";
                cin >> imag2;
                complex<double> z1(real1, imag1);
                complex<double> z2(real2, imag2);
                cout << "Сумма равна: " << add(z1, z2) << endl;
                break;
            }
            case 'q': {
                cout << "До свидания!" << endl;
                break;
            }
            default: {
                cout << "Неправильный выбор, попробуйте еще раз." << endl;
            }
        }
    } while (choice != 'q');
    return 0;
}