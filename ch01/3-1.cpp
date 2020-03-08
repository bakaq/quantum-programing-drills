#include <iostream>
#include <complex>

using namespace std;

int main(){
    
    double r, i;

    cout << "Real: ";
    cin >> r;

    cout << "\nImag: ";
    cin >> i;

    complex<double> c(r, i);

    cout << "\n" << abs(c) <<  "*exp(i*" << arg(c) << ")"; 

}
