#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin("F1.txt");

    if (!fin.is_open()) {
        cout << "Ошибка открытия файла F1.txt!" << endl;
        return 1;
    }

    ofstream fout("F2.txt");

    if (!fout.is_open()) {
        cout << "Ошибка открытия файла F2.txt!" << endl;
        fin.close();
        return 1;
    }

    int f1_size = 0;

    string line;

    int line_num = 0;

    while (getline(fin, line)) {
        if (++line_num % 2 == 0) {
            fout << line << endl;
        }
        f1_size += line.length() + 1;
    }

    fin.close();
    fout.close();

    fin.open("F1.txt");

    if (!fin.is_open()) {
        cout << "Ошибка открытия файла F1.txt!" << endl;
        return 1;
    }

    int f2_size = 0;

    fin.seekg(0, ios::end);
    f1_size = fin.tellg();

    fin.close();

    fin.open("F2.txt");

    if (!fin.is_open()) {
        cout << "Ошибка открытия файла F2.txt!" << endl;
        return 1;
    }

    fin.seekg(0, ios::end);
    f2_size = fin.tellg();

    fin.close();

    cout << "Размер файла F1: " << f1_size << " байт" << endl;
    cout << "Размер файла F2: " << f2_size << " байт" << endl;

    return 0;
}