#include <iostream>
#include <string> 
 
int main() {
    int n;
    std::cin >> n;
 
    std::string str[n];
    
    for(int i = 0; i < n; i++) {
        std::cin >> str[i];
        if(str[i].size() >= 10) { 
            str[i] = str[i][0] + std::to_string(str[i].size() - 2) + str[i][str[i].size() - 1];
        }
    }
    
    for(int j = 0; j < n; j++) { 
        if(j != n-1){
        std::cout << str[j] << std::endl;
        }
        else{
        std::cout << str[j];
        }
    }
 
    return 0;
}
