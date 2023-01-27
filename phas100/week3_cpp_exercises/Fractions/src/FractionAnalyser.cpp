#include "Fraction.h"
#include <iostream>
#include <stdexcept>


int main()
{
    int a, b;
    std::cout << "Please enter two numbers (numerator and denominator) separated by a space" << std::endl;
    
    try{
        std::cin >> a;
        std::cin >> b;
        Fraction frac(a, b);
    }
    
    catch(const std::logic_error& e){
        
        std::cout << e.what();
        
        a = 1;
        b = 2;
        
        std::cout<<"Fraction with denominator '0' is undefined, using default value 1/2";
        
    }

   
    Fraction frac(a, b);
    std::cout << frac.toString() << " = " << frac.toDouble() << std::endl;
    
    return 0;
}
