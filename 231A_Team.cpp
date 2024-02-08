#include <iostream>
#include <vector>
#include <cmath>
 
int main()
{
    
    int n, solutions = 0;
    std::cin >> n; 
    for(int i=0; i<n; i++){
        int petya, sanya, sonya;
        std::cin >> petya >> sanya >> sonya;
        if(petya + sanya + sonya >= 2){
            solutions++;
        }
    }
    std::cout<<solutions;
    return 0;
}
