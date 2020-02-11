
#include "UtilityFunctions.cpp"
#include <vector>

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i)
	{
		vec.push_back(i);
	}

	int result = Sum(vec);

	std::cout <<"Result of Sum is: " << result << std::endl;
	return 0;
}