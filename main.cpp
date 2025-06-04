#include <iostream>

int main()
{
    char x{};

    std::cout << "Enter an character to convert to ascii code: ";
    std::cin >> x;
    
    std::cout << x << " in ascii code is " << static_cast<int>(x) << "\n";

    return 0;
}