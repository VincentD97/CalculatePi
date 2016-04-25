//
//  main.cpp
//  CalculatePi
//
//  Created by DongVincent on 3/14/16.
//  Copyright © 2016 DongVincent. All rights reserved.
//



// π = 2 + 2/3 + 2/3*2/5 + 2/3*2/5*3/7 + ...
#include <iostream>
using namespace std;

void calculatePi(const int& precision)
{
    const int ARRSIZE = precision + 10;
    int x[ARRSIZE + 1], z[ARRSIZE + 1];
    int a = 1, b = 3, c, d, Run = 1;   // a : numerator b : denominator
    
    memset(x,0,sizeof(x));
    memset(z,0,sizeof(z));
    
    x[0] = 2;
    z[0] = 2;
    
    while(Run)
    {
        // z*=a;
        d = 0;
        for( int i = ARRSIZE; i >= 0; i-- )
        {
            c = z[i] * a + d;
            z[i] = c % 10;
            d = c / 10;
        }
        // z/=b;
        d = 0;
        for( int i = 0; i <= ARRSIZE; i++ )
        {
            c = z[i] + d * 10;
            z[i] = c / b;
            d = c % b;
        }
        // x+=z;
        Run = 0;
        for( int i = ARRSIZE; i >= 0; i-- )
        {
            c = x[i] + z[i];
            x[i] = c % 10;
            x[i-1] += c / 10;
            Run = Run || z[i];
        }
        a++;
        b+=2;
    }
    cout << x[0] << '.';
    for ( int i = 1; i <= precision; i++ )
    {
        cout << x[i];
    }
}


int main(int argc, const char * argv[]) {
    int precision;
    cout << "-----------------------------Pi Calculator-----------------------------\n\nInput your precision : ";
    cin >> precision;
    cout << endl;
    cout << "Pi = ";
    calculatePi(precision);
    cout << "\n\n                              Happy Pie Day !\n\n";
}
