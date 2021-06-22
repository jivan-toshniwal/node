#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	stack<int> x;
	vector<int> vec(n, -1);
	for (int i = 0; i < n; i++) {
		if (!x.empty() && arr[i] > arr[x.top()]) {
			vec[x.top()] = arr[i];
			x.pop();
			if (!x.empty()) {
				i--;
				continue;
			}
		}
		x.push(i);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " << vec[i] << endl;
	}
	delete[] arr;
}