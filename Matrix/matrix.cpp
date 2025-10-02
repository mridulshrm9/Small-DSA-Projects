#include <iostream>
using namespace std;

void createMatrix(int row, int col, int arr[][100]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Enter the value of element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int row, int col, int arr[][100]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "[" << arr[i][j] << "]";
        }
        cout << endl;
    }
}

void addMatrix(int row, int col, int arr1[][100], int arr2[][100], int res[][100]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
        cout << endl;
    }
}

void multiplyMatrix(int row1, int col1, int row2, int col2, int arr1[][100], int arr2[][100], int mul[][100]){
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            mul[i][j] = 0;
        }
    }
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            for (int k = 0; k < col1; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void tranMatrix(int row3, int col3, int arr3[][100], int tran[][100]){
    for(int i = 0; i < row3; i++){
        for (int j = 0; j < col3; j++){
            tran[i][j] = arr3[j][i];
        }
    }
}

int main() {
    int row, col;
    int row1, col1;
    int row2, col2;
    int row3, col3;
    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];
    int res[100][100];
    int mul[100][100];
    int tran[100][100];
    
    cout << "Enter the values of matrix1: " << endl;
    cout << "Enter the row of matrix: ";
    cin >> row1;
    
    cout << "Enter the column of matrix: ";
    cin >> col1;
    createMatrix(row1, col1, arr1);
    
    cout << "Enter the values of matrix3: " << endl;
    cout << "Enter the row of matrix: ";
    cin >> row3;
    
    cout << "Enter the column of matrix: ";
    cin >> col3;
    
    createMatrix(row3, col3, arr3);
    tranMatrix(row3, col3, arr3, tran);
    
    cout << "Enter the values of matrix2: " << endl;
    cout << "Enter the row of matrix: ";
    cin >> row2;
    
    cout << "Enter the column of matrix: ";
    cin >> col2;
    createMatrix(row2, col2, arr2);
    
    if(row1 == row2 & col1 == col2){
        row = row1;
        col = col1;
        addMatrix(row, col, arr1, arr2, res);
    }
    multiplyMatrix(row1, col1, row2, col2, arr1, arr2, mul);
    
    printMatrix(row, col, res);
    printMatrix(row, col, mul);
    printMatrix(row, col, tran);

    return 0;
}