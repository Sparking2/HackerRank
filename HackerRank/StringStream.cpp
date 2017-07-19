#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> nvec;
	
	istringstream ss(str);
	string token;

	while (getline(ss,token,','))
	{
		nvec.push_back(stoi(token));
	}
	return nvec;
}

int StringStream() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}