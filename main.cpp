#include <iostream>



    using l_int = long long int;
    l_int factorial (l_int num);

    
    int main(){
        l_int line{};
        std::cout << "Enter the line: " << std::endl;
        std::cin >> line;
        l_int COUNT = line + 1;
        for(int i{}; i <= COUNT; i++){
            l_int n = factorial(line);
            l_int k = factorial(i);
            l_int n_k = factorial(line - i);
            l_int c = n/(k*n_k);
            std::cout << c << " ";
        }
    
        
    }

    l_int factorial (l_int num){
            if((num == 1)||(num == 0)){
                return 1;
            }
            return num * factorial(num - 1);
        }

