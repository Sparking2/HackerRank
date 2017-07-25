#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int arrayNum, number;
	std::cin >> arrayNum;
	std::vector<int> nvec;

	for (int i = 0; i < arrayNum; i++)
	{
		std::cin >> number;
		nvec.push_back(number);
	}

	int queryNum, val;
	std::cin >> queryNum;

	for (int i = 0; i < queryNum; i++)
	{
		std::cin >> val;
		std::vector<int>::iterator low = std::lower_bound(nvec.begin(), nvec.end(), val);
		if (nvec[low - nvec.begin()] == val)
			std::cout << "Yes " << (low - nvec.begin() + 1) << std::endl;
		else
			std::cout << "No " << (low - nvec.begin() + 1) << std::endl;
	}
	return 0;
}