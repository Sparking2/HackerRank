#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
	int amount;
	std::vector<int> nvec;
	std::cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		int number;
		std::cin >> number;
		
		nvec.push_back(number);
	}

	std::sort(nvec.begin(), nvec.end());

	for (int i = 0; i < amount; i++)
	{
		std::cout << nvec[i] << " ";
	}
	return 0;
}