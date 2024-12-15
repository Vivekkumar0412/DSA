#include <iostream>
using namespace std;
int convertBinary(int num){
    int ans = 0;
    int pow = 1;
    while(num > 0){
        int last = num % 2;
        ans = ans + (last * pow);
        num/= 2;
        pow *= 10;
    };
    return ans;
}
int main() {
    cout<<convertBinary(10)<<endl;
    return 0;
}