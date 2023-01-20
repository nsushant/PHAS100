#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> input_vec)
{   int how_many_multiples = 0;
    
    for (const auto&element: input_vec){
        if (element%5 == 0){
            how_many_multiples++;

        }
    
    }
    return how_many_multiples;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
     
}



void print_elements_of_vec(std::vector<int>input_vec){

    for (const auto&element : input_vec){

        std::cout<< element;

    }

}
