#include <iostream>
using namespace std;
int RecursionFibonachi(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return RecursionFibonachi(n - 2) + RecursionFibonachi(n - 1);
}
int main()
{
	int num;
	cin >> num;
	cout << RecursionFibonachi(num) << "\n";
	return 0;
}