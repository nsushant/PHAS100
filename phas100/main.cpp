//
//  main.cpp
//  phas100
//
//  Created by Sushant Nigudkar on 19/01/2023.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::vector<int> items {1,3,4,5};
    
    for (const auto &v: items ){
        
        std::cout << v << "\n";
        
    }
    
    
    return 0;
}
