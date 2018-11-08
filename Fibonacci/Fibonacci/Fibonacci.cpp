#include <iostream>
using namespace std;
/*
//����һ���ܴ�Ľⷨ
long long Fibonacci(size_t n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/
//�ýⷨ�������Ǹ��ⷨҪ��
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
	cout << "������Ҫ�����쳲���������";
	cin >>  n;
	cout << Fibonacci(n) << endl;
	return 0;
}