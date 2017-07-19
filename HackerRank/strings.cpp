#include <iostream>
#include <string>
using namespace std;

int stri_ngs() {
	// Complete the program
	string a;
	string b;
	cin >> a;
	cin >> b;
	cout << a.length() << " ";
	cout << b.length() << endl;
	cout << a + b << endl;

	char c = a[0];

	a[0] = b[0];

	b[0] = c;

	cout << a << " " << b;

	return 0;
}