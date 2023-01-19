#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive()//take a vector of ints here)
{
    return 0;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}


void print_elements_of_vector(std::vector<int> input_vec){
    
    for (const auto& element_of_vec : input_vec){
        
        std::cout<<element_of_vec;
    }
}


