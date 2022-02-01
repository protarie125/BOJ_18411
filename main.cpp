#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto min = a;
	if (b < min) {
		min = b;
	}

	if (c < min) {
		min = c;
	}

	cout << a + b + c - min;
	
	return 0;
}