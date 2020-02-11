#include <iostream>
#include <vector>
#include "UtilityFunctions.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> g1;
    for (int i = 1; i < 3; i++)
    {
        g1.push_back(i);
    }
    cout << Product(g1) << endl;

    return 0;
}