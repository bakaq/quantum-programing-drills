// Write a program that accepts two complex numbers and
//outputs their sum and their product

#include <iostream>

using namespace std;

int main(){
    
    double n1r, n1i;
    double n2r, n2i;
    
    // Read numbers
    cout << "First Number:\n";
    cout << "    Real: ";
    cin >> n1r; 
    cout << "    Imag: ";
    cin >> n1i; 

    cout << "\nSecond Number:\n";
    cout << "    Real: ";
    cin >> n2r; 
    cout << "    Imag: ";
    cin >> n2i; 
    cout << "\n";

    double nsr, nsi;
    double npr, npi;
    
    // Sum
    nsr = n1r + n2r;
    nsi = n1i + n2i;

    cout << "Sum: " << nsr << " + (" << nsi << ")i\n";

    // Product
    npr = (n1r*n2r - n1i*n2i);
    npi = (n1i*n2r + n1r*n2i);

    cout << "Product: " << npr << " + ("<< npi << ")i\n";
}
