#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    srand(time(nullptr)); 

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Массив до удаления и добавления элементов: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k = 3; 

    for (int i = k; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

   
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            for (int j = size; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 0; 
            size++; 
            i++; 
        }
    }

    cout << "Массив после удаления и добавления элементов: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}