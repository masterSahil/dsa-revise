#include <iostream>
using namespace std;

int main() {
    int row, col;

    cin >> row >> col;

    int a[row][col], b[row][col];

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> a[i][j];

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> b[i][j];

    cout << "Result Matrix:\n";

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}