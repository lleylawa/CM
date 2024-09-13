//for long double
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    long double I = 1.0;
    
    while(2 * I > I) {
        n++;
        I *= 10;
    }
    cout<< n <<endl;
    return 0;
}
