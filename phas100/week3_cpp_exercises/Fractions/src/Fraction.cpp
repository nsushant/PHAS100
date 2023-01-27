#include "Fraction.h"
#include <algorithm>
#include <iterator>
//function members start:


Fraction Fraction::reciprocal(){
    
    return Fraction(denominator,numerator);
}


Fraction Fraction::multiply(int a){
 
    
    return Fraction(numerator*a,denominator);
        
    
}


double Fraction::toDouble(){
    
    return (double(numerator)/denominator);
    
}


std::string Fraction::toString(){
    
    if (numerator==0){
        
        return std::to_string(numerator);
        
    }
    
    else{
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
}


    
