//#include <iostream>
//
//using namespace std;
//
//long long num[100001];
//long long ca[100001];
//int main()
//{
//	long long a[2] = { 0 };
//	long long i, n;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	for (i = 1; i < n; i++)
//	{
//		ca[i - 1] = num[i] - num[i - 1];
//		if (ca[i - 1] < 0)
//		{
//			a[0] -= ca[i - 1];
//		}
//		else
//		{
//			a[1] += ca[i - 1];
//		}
//	}
//	cout << (a[0] > a[1] ? a[0] : a[1]);
//
//	return 0;
//}