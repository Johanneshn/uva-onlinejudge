
#include <iostream>

using namespace std;


int main(){
    int n, i, j, input1, input2;
    
    int maxCycles = INT_MIN;
    int cycles;
    
    //input n
    while(cin >> i >> j){
        maxCycles = 0;
        input1 = i;
        input2 = j;
        
       while (i<=j) {
    
           n = i;
           
           cycles = 1;
           
           //algoritm
            while (n != 1) {
                //if n is odd then n <- 3n + 1
                if (n % 2!=0) {
                    
                    n = (3 * n) + 1;
                    //std::cout << "jämt" << std::endl;
                }
                else n = n/2;
                
                
                cycles++;
            }
           
           if (cycles > maxCycles) maxCycles = cycles;
           
           i++;
           
       }
        cout << input1 << " " << input2 << " " << maxCycles <<  endl;
    }
    
    return 0;
  }
