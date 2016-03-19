
#include <iostream>

using namespace std;


int main(){
    int n, i, j, input1, input2;
    
    int maxCycles = 0;
    int cycles;
    
    //input n
    while(cin >> i >> j){
        
        maxCycles = 0;
        input1 = i;
        input2 = j;
        
        if(i>j)
            swap(i,j);
        
       while (i<=j) {
    
           n = i;
           
           cycles = 1;
           
           //algoritm
            while (n != 1) {
                
                if (n % 2!=0) {
                    n = (3 * n) + 1;
                   
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
