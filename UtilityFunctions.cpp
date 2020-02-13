#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

int Product(std::vector<int> nums)
{
    int acc = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        acc *= nums[i];
    }
    return acc;
}

int Sum(std::vector<int> nums) {
	int result = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		result += nums[i];
	}
	return result;
}
