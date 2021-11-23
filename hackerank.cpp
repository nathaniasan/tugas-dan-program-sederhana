#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    
    int a, b;
    cin>>a;
    
    if (a<10&&a>0){
        for(a=a; a>0 ; a--) {
            for(b=0; b<a ; b++) {
            
            cout << a << " ";
                                
}                                 
                cout << endl;
}        
     
        
    }
    
    else {
        cout << "Bilangan tidak sesuai!";
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
