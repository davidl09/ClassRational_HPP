#include "rational.hpp"

int main(){
    LinAlg::Rational a(3, 4);
    std::cout << a.tostr() << "\n";

    LinAlg::Rational b("4/5");
    std::cout << b.approx();
}