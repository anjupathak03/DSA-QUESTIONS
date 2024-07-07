#include <iostream>
#include <string>

int main() {
    std::string str = "abbaca";
    
    // Remove a portion of the string (from index 5, 7 characters)
    str.erase(1, 2);  
    std::cout << str << std::endl; // Output: "Hello!"

    return 0;
}
