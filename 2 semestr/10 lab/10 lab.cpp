#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int n, k; 
    int* arr; 
    cout << "Введите размер массива: ";
    cin >> n;
    arr = (int*)malloc(n * sizeof(int));
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10; 
        cout << arr[i] << " ";
    }
    cout << endl << "Введите номер элемента для удаления и добавления: ";
    cin >> k;
    n--; 
    for (int i = k; i < n; i++) {
        arr[i] = arr[i+1]; 
    }
    arr = (int*)realloc(arr, n * sizeof(int)); 
    cout << "Массив после удаления элемента: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Введите новый элемент для добавления: ";
    int new_element;
    cin >> new_element;
    arr = (int*)realloc(arr, (n+1) * sizeof(int)); 
    for (int i = n; i >= k; i--) {
        arr[i+1] = arr[i]; 
    }
    arr[k] = new_element; 
    cout << "Массив после добавления элемента: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    free(arr); 
    return 0;
}