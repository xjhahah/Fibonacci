#include <iostream>
using namespace std;
/*
//这是一个很挫的解法
long long Fibonacci(size_t n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/
//该解法比上面那个解法要好
long long Fibonacci(unsigned n)
{
	int arr[2] = { 0,1 };
	if (n < 2)
		return arr[n];
	long long FibNum1 = 1;
	long long FibNum2 = 0;
	long long ret = 0;
	for (int i = 2; i <= n; ++i)
	{
		ret = FibNum1 + FibNum2;
		FibNum2 = FibNum1;
		FibNum1 = ret;
	}
	return ret;
}
int main()
{
	int n = 0;
	cout << "请输入要计算的斐波那契数：";
	cin >>  n;
	cout << Fibonacci(n) << endl;
	return 0;
}