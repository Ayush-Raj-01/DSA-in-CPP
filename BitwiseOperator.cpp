#include <iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;
    
    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a^b) << endl;
    
    // Right shift
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    
    // Left shift
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;
    
    // Post increment and pre increment
    
    int i = 7;
    
    cout << (++i)<<endl;
    cout << (i++)<<endl;
    cout << (i--)<<endl;
    cout << (--i)<<endl;

}