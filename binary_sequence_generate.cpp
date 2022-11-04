#include <algorithm>
#include <iostream>

using namespace std;

void solution(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << endl;
}

void generate(int n, int arr[], int i) {
	if (i == n) {
		solution(arr, n);
		return;
	}

	arr[i] = 0;
	generate(n, arr, i + 1);

	arr[i] = 1;
	generate(n, arr, i + 1);
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	generate(n, arr, 0);

	return 0;
}
