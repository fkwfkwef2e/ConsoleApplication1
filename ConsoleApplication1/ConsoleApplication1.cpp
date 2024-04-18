#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    double arr[ROWS][COLS];
    double sum;
    double avg;

    // Ввод элементов массива с клавиатуры
    for (int i = 0; i < ROWS; i++) {
        sum = 0;
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        avg = sum / COLS;
        cout << "Среднее арифметическое " << i + 1 << "-й строки: " << fixed << setprecision(2) << avg << endl;
    }

    return 0;
}
