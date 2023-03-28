#include <iostream>
#include <string>

using namespace std;

const int ROWS = 3; 
const int COLS = 16; 

string extractWord(int arr[][COLS], int row, int col) {
    string word = "";
    while (arr[row][col] != 0 && col < COLS) {
        word += to_string(arr[row][col]);
        col++;
    }
    return word;
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3, 0, 2, 3, 4, 0, 2, 3, 0, 3, 4, 5, 0, 0},
                           {2, 3, 4, 4, 5, 0, 2, 3, 4, 5, 6, 7, 0, 1, 0, 0},
                           {2, 3, 4, 4, 5, 5, 6, 7, 6, 7, 0, 4, 5, 0, 0, 0}};

    string result = "";
    int charCount = 0;

    for (int i = 0; i < ROWS; i++) {
        int j = 0;
        while (j < COLS) {
            string word = extractWord(arr, i, j);
            j += word.length() + 1; 

            if (word.length() > 0) {
                if (charCount + word.length() + 3 > 60) { 
                    result += ")\n(";
                    charCount = 0;
                }
                else if (result.length() > 0) {
                    result += ",";
                }

                result += word;
                charCount += word.length() + 3;
            }
        }
    }

    if (result.length() > 0) {
        result = "(" + result + ")";
        cout << result << endl;
    }

    return 0;
}