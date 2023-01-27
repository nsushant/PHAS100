#pragma once
#include <string>
#include <vector>

class Fraction {
    
    // initialize data members
private:
    int numerator {};
    int denominator {};
    
public:
    //define constructors
    //constructor that takes two ints as input
    Fraction (int n1,int n2){
        numerator = n1;
        denominator = n2;
        
        
        if (denominator==0){
            
            throw std::logic_error("Division by 0 is undefined change fraction denominator");
        }
        
    }
    
    ~Fraction(){}

    
    //function members start:

    Fraction reciprocal();
    Fraction multiply(int a);
    
    double toDouble();
    std::string toString();
        
};
