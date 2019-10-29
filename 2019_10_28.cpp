#include <iostream>
using namespace std;

int main2() {
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= i; ++j) {
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}