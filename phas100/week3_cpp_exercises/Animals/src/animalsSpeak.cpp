#include <iostream>
#include <vector>
#include "animalClasses.h"

int main()
{
    //declare a vector of animal pointers here

    std::vector<std::unique_ptr<Animals>> animal;

    
    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    animal.push_back(std::unique_ptr<Dogs>());
    animal.push_back(std::unique_ptr<Cats>());
    animal.push_back(std::unique_ptr<Budgies>());

    //loop through all the animals in your vector and call Speak() on them in turn
    for (int i = 0:animal[i]:i++){
        
        animal[i]->speak();
    }

    return 0;
}
