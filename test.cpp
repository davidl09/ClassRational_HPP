#include "rational.hpp"

int main(){

    LinAlg::Rational num;
    while(true){
        //auto num2 = Parsing::parse_mstring<int> ("3/4");  //fix this! weird bug
        //std::cout << num;

        try{
            std::cout << "Enter an expression to evaluate\n";
            std::cin >> num;
            std::cout << num << "\n" << num.approx() << "\n";
        }
        catch(...){
            std::cout << "That was not a valid input\n";
        }
        
    }

    /*
    LinAlg::Rational a(3, 4);
    std::cout << a << "\n";

    LinAlg::Rational b("4/5");
    std::cout << b.approx() << "\n";

    LinAlg::Rational c("3^4");
    std::cout << c << "\n";

    LinAlg::Rational d(3), e(2);
    d = d^e;
    std::cout << d << std::endl;*/
}