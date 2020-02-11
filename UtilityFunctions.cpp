#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

int Product(std::vector<int> nums)
{
    int acc = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        acc *= nums[i];
    }
    return acc;
}
