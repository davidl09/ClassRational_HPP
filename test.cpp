#include "rational.hpp"

int main(){

    LinAlg::Rational num;
    while(true){

        try{
            std::cout << "Enter an expression to evaluate\n";
            std::cin >> num;
            std::cout << num << "\n" << num.approx() << "\n";
        }
        catch(...){
            std::cout << "That was not a valid input\n";
        }
        
    }
}