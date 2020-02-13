#include <iostream>
#include <vector>
#include "UtilityFunctions.cpp"

int main(int argc, char *argv[])
{
    // Product Function Demonstration
    std::vector<int> g1;
    for (int i = 1; i < 3; i++)
    {
        g1.push_back(i);
    }
    std::cout << "Result from Product: " << Product(g1) << std::endl;
  
    // Sum Function Demonstration
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
    {
      vec.push_back(i);
    }

    int result = Sum(vec);

    std::cout <<"Result of Sum is: " << result << std::endl;
    return 0;
}