//
//  10055 - Hashmat the Brave Warrior.cpp
//  uva onlinejudge
//


#include <iostream>

using namespace std;

int main(){
    
    long ha, oa;
    
    while (cin >> ha >> oa) {
        
        if (ha > oa) {
            cout << ha - oa << endl;
        }
        else cout << oa - ha << endl;
    }
    
    return 0;


}
