#include <iostream>
using namespace std;

void readArray(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout << "Enter the size of element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void printArray(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout << "The value of element " << i+1 << " is " << arr[i] << endl;
    }
}

void insertElement(int &size, int value, int position, int arr[]){
    for(int i = size - 1; i >= position - 1; i--){
        arr[i+1] = arr[i];
    }
    arr[position - 1] = value;
    size = size + 1;
}

void deleteElementPOS(int &size, int position, int arr[]){
    for(int i = position - 1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    size = size - 1;
}

int indexFinder(int size, int target, int arr[]){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i + 1;
        }
    }
    return 0;
}

void deleteElementVAL(int &size, int value, int arr[]){
    int position = indexFinder(size, value, arr);
    for(int i = position - 1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    size = size - 1;
}

int main() {
    int size;
    int value, target, position;
    int toggle = 1;
    int arr[100];
    
    while(toggle == 1){
        string function;
        cout << "Enter the operation you want to do (Select from below): " << endl;
        cout <<  "(Create = Create the array" << endl;
        cout <<  "View = See array" << endl;
        cout <<  "Insert = Insert element in array" << endl;
        cout <<  "Delete = Delete element in array" << endl;
        cout <<  "Search = Find positon of the value in array): ";
        cin >> function;
        
        if(function == "Create"){
            cout << "Enter the size of the array: ";
            cin >> size;
    
            readArray(size, arr);
        }
        else if(function == "View"){
            printArray(size, arr);
        }
        else if(function == "Insert"){
            cout << "Enter the value of element: ";
            cin >> value;
            
            cout << "Enter the position of element: ";
            cin >> position;
            
            insertElement(size, value, position, arr);
        }
        else if(function == "Search"){
            cout << "Enter the value you want to find position of: ";
            
            cin >> target;
            cout << "The position of " << target << " is " << indexFinder(size, target, arr) << endl;
            
        }
        else if(function == "Delete"){
            string delfun;
            cout << "Choose the method (Value = Delete by value, Position = Delete by position): ";
            cin >> delfun;
            if(delfun == "Value"){
                cout << "Enter the value you want to delete: ";
                cin >> value;
                deleteElementVAL(size, value, arr);
            }
            else if(delfun == "Position"){
                cout << "Enter the positon you want to delete: ";
                cin >> position;
                deleteElementPOS(size, position, arr);
            }
        }
        else if(function == "Exit"){
            toggle = 0;
        }
        else{
            cout << "Invalid Output" << endl;;
        }
    }

    return 0;
}