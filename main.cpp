#include <iostream>
#include "armadillo"

using namespace std;

using namespace arma;
int main()
{
    cout << "Hello World!" << endl;
    return 0;
    double ojete=31415419547194123419238471.32412341234123412341234;
    std::cout<<ojete;

    mat A = randu<mat>(4,5);
    mat B = randu<mat>(4,5);

    std::cout << A*B.t() << std::endl;

}
