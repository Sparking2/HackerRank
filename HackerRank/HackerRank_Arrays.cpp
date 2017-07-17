#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[1000];

int maon() {

	int arraySize = 0;
	cin >> arraySize;
	
	for (int i = 0; i < arraySize; i++)
	{
		cin >> arr[i];
	}

	for (int i = arraySize - 1; i >= 0 ; i--)
	{
		 cout << to_string(arr[i]) + " ";
	}
	cout << endl;
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	system("Pause");
	return 0;
}