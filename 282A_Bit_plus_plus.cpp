#include <iostream>
#include <string>
 
int main() {
    int n; 
    std::cin >> n;
    
    int x = 0; 
    std::string statement;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> statement; 
        
        
        if (statement.find("++") != std::string::npos) {
            x++; 
        } else if (statement.find("--") != std::string::npos) {
            x--; 
        }
    }
    
    std::cout << x << std::endl; 
    
    return 0;
}
