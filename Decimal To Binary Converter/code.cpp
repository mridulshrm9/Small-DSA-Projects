#include <iostream>
using namespace std;

int main() {
    int pow = 1;
    int num, rem;
    int ans = 0;
    
    cout << "Enter the value: ";
    cin >> num;
    
    while(num > 0){
        rem = num % 2;
        num = num / 2;
        
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    
    cout << ans;

    return 0;
}