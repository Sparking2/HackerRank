#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {

	int vectorSize;
	std::cin >> vectorSize;
	std::vector<int> nvec;

	for (int i = 0; i < vectorSize; i++)
	{
		int number;
		std::cin >> number;
		nvec.push_back(number);
	}

	int erasePosition;
	std::cin >> erasePosition;

	nvec.erase(nvec.begin() + erasePosition - 1);

	int eraseArea1, eraseArea2;
	std::cin >> eraseArea1 >> eraseArea2;

	eraseArea1 = eraseArea1 - 1;
	eraseArea2 = eraseArea2 - 1;

	nvec.erase(nvec.begin() + eraseArea1, nvec.begin() + eraseArea2);

	std::cout << nvec.size() << std::endl;

	for (int i = 0; i < nvec.size(); i++)
	{
		std::cout << nvec[i] << " ";
	}

	return 0;
}