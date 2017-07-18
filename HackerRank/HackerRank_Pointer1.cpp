#include <stdio.h>
#include <cmath>
#include <iostream>
void update(int *a, int *b) {
	// Complete this function 
	int c = *a;
	*a = *a + *b;
	*b = abs(c - *b);
}

using namespace std;

int pointers() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	cout << endl;
	system("PAUSE");
	return 0;
}