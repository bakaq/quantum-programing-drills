// Take the program that you wrote in the last programming
// drill and make it also perform subtraction and division
// of complex numbers. In addition, let the user enter a
// complex number and have the computer return its modulus 
// and conjugate.


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class complex{
    double real, img;
    public:
        complex(){
            // Default constructor
            real = 0;
            img = 0;
        }
        complex(double r, double i){
            // Parametrized constructor
            real = r;
            img = i;
        }
        void set(double, double);
        string gets();
        double get_real(){return real;}
        double get_img(){return img;}
};
void complex::set(double r, double i){
    real = r;
    img = i;
}
string complex::gets(){
    stringstream s;
    s << real;
    if(img >= 0){
        s << " + " << img;
    }else{
        s << " - " << -img;
    }
    s << "i";
    return s.str();
}

complex sum(complex n1, complex n2){
    complex result{n1.get_real() + n2.get_real(), n1.get_img() + n2.get_img()};
    return result;
}

complex mult(complex n1, complex n2){
    complex result{n1.get_real()*n2.get_real() - n1.get_img()*n2.get_img(),
                    n1.get_real()*n2.get_img() + n1.get_img()*n2.get_real()};
    return result;
}

// TODO: division and subtraction 
/*complex div(complex n1, complex n2){
    complex result{}
}*/

int main(){
    
    double r, i;
    complex n1, n2;

    // Read numbers
    cout << "First Number:\n";
    cout << "    Real: ";
    cin >> r; 
    cout << "    Imag: ";
    cin >> i; 
    
    n1.set(r, i);

    cout << "\nSecond Number:\n";
    cout << "    Real: ";
    cin >> r; 
    cout << "    Imag: ";
    cin >> i; 
    cout << "\n";

    n2.set(r, i);
    
    // Sum
    cout << "Sum: " << sum(n1, n2).gets() << "\n"; 

    // Product
    cout << "Product: " << mult(n1, n2).gets() << "\n";
}
