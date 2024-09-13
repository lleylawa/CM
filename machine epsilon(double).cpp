//for double
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    double e  = 1.0; 

    while (e + 1 > 1) {
        n++;
        e /= 10;
    }
    cout<< n <<endl;
    return 0;
}
