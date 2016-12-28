// π = 2 + 2/3 + 2/3*2/5 + 2/3*2/5*3/7 + ...
#include <iostream>
using namespace std;


int main() {
    int precision;
    cout << "-----------------------------Pi Calculator-----------------------------\n\nInput the precision you want : ";
    cin >> precision;
    cout << endl;
    cout << "Pi = ";
    
    
    const int ARRSIZE = precision + 10;
    int pi[ARRSIZE + 1], addend[ARRSIZE + 1];
    int num = 1, denom = 3, tmp = 0, carry;   // num : numerator, denom : denominator
    bool done = false;
    
    // 能不能dynamic alloc?
    
    memset(pi, 0, sizeof(pi));
    memset(addend, 0, sizeof(addend));
    
    pi[0] = 2;
    addend[0] = 2;
    
    while(!done) {
        // addend *= num;
        carry = 0;
        for (int i = ARRSIZE; i >= 0; i--) {
            tmp = addend[i] * num + carry;
            addend[i] = tmp % 10;
            carry = tmp / 10;
        }
        // addend /= denom;
        carry = 0;
        for (int i = 0; i <= ARRSIZE; i++) {
            tmp = addend[i] + carry * 10;
            addend[i] = tmp / denom;
            carry = tmp % denom;
        }
        // pi += addend;
        done = true;
        for (int i = ARRSIZE; i >= 0; i--) {
            tmp = pi[i] + addend[i];
            pi[i] = tmp % 10;
            pi[i-1] += tmp / 10;
            done = done && !addend[i];
        }
        num++;
        denom += 2;
    }
    cout << pi[0] << '.';
    for (int i = 1; i <= precision; i++)
        cout << pi[i];
    
    cout << "\n\n                              Happy Pie Day !\n\n";
}
