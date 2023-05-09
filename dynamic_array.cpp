#include <iostream>
#include <vector>

int main()
{
    // Dynamic array initialization
    std::vector<double> digits = {1.0, 2.0, 3.0};
    std::cout << "Array virtual-size = " << digits.size() << '\t';
    std::cout << "Array physical-size = " << digits.capacity() << std::endl;

    // Adding elements to the end of an array
    digits.push_back(4.0);
    digits.push_back(5.0);
    digits.push_back(6.0);
    digits.push_back(7.0);
    std::cout << "Array virtual-size = " << digits.size() << '\t';
    std::cout << "Array physical-size = " << digits.capacity() << std::endl;

    // Manual reservation of physical space in the array
    digits.reserve(20);
    std::cout << "Array virtual-size = " << digits.size() << '\t';
    std::cout << "Array physical-size = " << digits.capacity() << std::endl;

    // Print array elements
    std::cout << "Array 'digits' = ";
    for (int i = 0; i < digits.size(); i++)
    {
        std::cout << digits[i] << ' ';
    }
    

}