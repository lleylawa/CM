//for float
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    float z = 1.0; 

    while (2 * z > z) {
        n++;
        z /= 10;
    }
    cout<< n <<endl;
    return 0;
}
