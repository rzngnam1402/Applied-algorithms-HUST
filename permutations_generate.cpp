#include <bits/stdc++.h>

using namespace std;
bool mark[100];
int arr[100];

void solution(int n) {
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Try(int n, int k) {
	for (int i=1; i <= n; i++) {
		if (!mark[i]) {
			arr[k] = i;
			mark[i] = true;
			if ( k == n)
				solution(n);
			else
				Try(n, k + 1);
			mark[i] = false;
		}
	}
}

int main() {
	int n;
	cin >> n;
	Try(n,1);

	return 0;
}
