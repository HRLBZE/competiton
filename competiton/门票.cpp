//#include<iostream>
//using namespace std;
//
//long long fee[1000002];
//long long sum_fee[1000002];
//
//int main()
//{
//	long long n, t, i, j;
//	long long num = 0;
//	cin >> n >> t;
//	for (i = 0; i < n; i++)
//	{
//		cin >> fee[i + 1];
//		fee[i + 1] -= t;
//	}
//	for (i = 1; i <= n; i++)
//		sum_fee[i] = sum_fee[i - 1] + fee[i];
//	for (i = 1; i <= n; i++)
//		for (j = 0; j < n; j++)
//		{
//			if (sum_fee[i] - sum_fee[j] > 0)
//				num++;
//		}
//
//	cout << num % (1000000007);
//	return 0;
//}