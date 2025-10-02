#include <iostream>
using namespace std;

void readArray(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout << "Enter the value of element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void printArray(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout << "The value of element " << i+1 << " is " << arr[i] << endl;
    }
}

int binarySearchRecursive(int first, int last, int target, int arr[]){
    int mid = (first + last) / 2;
    
    if(target == arr[mid]){
        return mid + 1;
    }
    else if(target > arr[mid]){
        return binarySearchRecursive(mid + 1, last, target, arr);
    }
    else if(target < arr[mid]){
        return binarySearchRecursive(first, mid - 1, target, arr);
    }
    else{
        cout << 00;
    }
    
    return 0;
}

int binarySearchIterative(int first, int last, int target, int arr[]){
    while(first <= last){
        int mid = (first + last) / 2;
        
        if (arr[mid] == target) {
            return mid + 1;
        }
        if (arr[mid] < target) {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }
    
    return 0;
}

int main() {
    int size, target;
    int arr[100];
    int first, last;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    readArray(size, arr);
    
    cout << "Enter the element you want to find: ";
    cin >> target;
    
    first = 0;
    last = size - 1;
    
    if(binarySearchRecursive(first, last, target, arr) == 00){
        cout << "Invalid target value...";
    }
    else{
        cout << "The position of your element " << target << " is " << binarySearchRecursive(first, last, target, arr) << " by Recursive method" << endl;
    }
    
    cout << "The position of your element " << target << " is " << binarySearchIterative(first, last, target, arr) << " by Iterative method" << endl;

    return 0;
}