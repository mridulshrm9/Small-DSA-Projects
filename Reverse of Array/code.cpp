#include <iostream>
using namespace std;

int main() {
    
    int arr[100] = {};
    int size;
        
    cout << "Enter the size of array: ";
    cin >> size;
        
    for(int i = 0; i < size; i++){
        cout << "Enter the value of " << i + 1 << " position: ";
        cin >> arr[i];
    }
    
    int start = 0;
    int end = size - 1;
    
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start = start + 1;
        end = end - 1;
    }
    
    for(int i = 0; i < size; i++){
        cout << "The value of " << i + 1 << " position is: " << arr[i]<< endl;
    }
    return 0;
}