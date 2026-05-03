#include <iostream>
using namespace std;

int main() {
    // Declare two 4x4 matrices and one for the result
    int matrixA[4][4], matrixB[4][4], sumMatrix[4][4];

    // Input elements for the first matrix
    cout << "Enter elements for Matrix A (16 integers):" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "\nEnter elements for Matrix B (16 integers):" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    // Perform addition and display the result
    cout << "\n--- Resulting Sum Matrix (A + B) ---" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // Adding corresponding elements
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            
            // Print the element followed by a tab for alignment
            cout << sumMatrix[i][j] << "\t";
        }
        // New line after each row
        cout << endl;
    }

    return 0;
}
