//Operator Overloading

#include<iostream>
#include<string>
using namespace std;

class Complex
{
public:
	int a, b;
	void input(string s)
	{
		int v1 = 0;
		int i = 0;
		while (s[i] != '+')
		{
			v1 = v1 * 10 + s[i] - '0';
			i++;
		}
		while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
		{
			i++;
		}
		int v2 = 0;
		while (i<s.length())
		{
			v2 = v2 * 10 + s[i] - '0';
			i++;
		}
		a = v1;
		b = v2;
	}
};

Complex operator +(Complex a, Complex b) {
	int cA = a.a + b.a;
	int cB = a.b + b.b;
	Complex z = Complex();
	z.input(std::to_string(cA) + "+i" + std::to_string(cB));
	return z;
}

ostream& operator << (ostream& os, Complex a) {
	os << a.a << "+i" << a.b;
	return os;
}


int main()
{
	Complex x, y;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	x.input(s1);
	y.input(s2);
	Complex z = x + y;
	cout << z << endl;
}