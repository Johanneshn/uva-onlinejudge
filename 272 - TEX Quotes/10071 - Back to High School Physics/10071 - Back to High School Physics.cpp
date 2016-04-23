//
//  10071 - Back to High School Physics.cpp
//  uva onlinejudge
//

#include <iostream>

using namespace std;

int main(){
    
    int v, t;

    while (cin >> v >> t) {
        
        if (t == 0) cout << 0 << endl;
        
        else cout << v*2*t << endl;
    }
}