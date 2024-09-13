//for long double
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    long double e  = 1.0; 

    while (e + 1 > 1) {
        n++;
        e /= 10;
    }
    cout<< n <<endl;
    return 0;
}
