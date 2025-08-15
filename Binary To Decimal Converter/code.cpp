#include <iostream>
using namespace std;

int main() {
    int binary;
    int inc = 1;
    int ans = 0;
    cout << "Enter the value: ";
    cin >> binary;
    
    while(binary > 0){
        int rem = binary % 10; 
        binary = binary / 10;
        
        ans = ans + (rem * inc);
        inc = inc * 2;
    }
    
    cout << ans;

    return 0;
}