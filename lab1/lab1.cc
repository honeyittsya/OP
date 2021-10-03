#include <iostream>

int main(int argc, char **argv)
{
        float a,b, sq;

        std::cout << "Enter first cathed  : " ; std::cin >> a;

        std::cout << "Enter second cathed : " ; std::cin >> b;

        sq = ( (a * b) / 2 );

        std::cout << "Square of triagle is: " <<  sq << std::endl;

        return 0;
}
