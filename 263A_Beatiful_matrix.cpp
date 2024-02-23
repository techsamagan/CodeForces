#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int Arr[5][5];
    // Reading input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> Arr[i][j];
        }
    }
 
    int moves = 0;
    // Finding the position of 1
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (Arr[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }
 
    // Calculating the minimum moves
    moves += abs(2 - row);
    moves += abs(2 - col);
 
    cout << moves << endl;
 
    return 0;
}
