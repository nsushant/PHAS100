#include <memory>
#include <iostream>
#include <vector>

/**
 * A simple class which just reports when it is created (constructor) and when it is destroyed (destructor).
*/
class Reporter
{
    public: 
    Reporter(std::string id_string) : ID(id_string)
    {
        std::cout << "Creating Reporter Object with ID: " << ID << std::endl;
    }

    ~Reporter()
    {
        std::cout << "Destroying Reporter Object with ID: " << ID << std::endl;
    }

    //add your function to set the smart pointer here

    private:
    //you should add your smart pointer member here
    std::string ID;
};



std::unique_ptr<Reporter> take_pointer(std::unique_ptr<Reporter>&report){
    std::unique_ptr<Reporter> rep2 = std::unique_ptr<Reporter>("new_rep");
    return std::unique_ptr<Reporter>&rep2;
}
