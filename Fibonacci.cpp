#include <iostream>
using namespace std;
int IterationFibonachi(int n) {
	int* array = (int*)malloc(sizeof(int) * n);

	for (int j = 0; j < n; j++) {
		array[j] = 0;
	}

	for (int i = 0; i < n+1; i++) {
		if (i == 0 || i == 1) {
			array[i] = i;
		}
		else{
			array[i] = array[i - 1] + array[i-2];
		}
	}
	return array[n];
}
int main()
{

	int num;
	cin >> num;
	cout << IterationFibonachi(num) << "\n";
	return 0;
}