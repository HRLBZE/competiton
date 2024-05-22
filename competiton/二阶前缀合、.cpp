//#include<iostream>
//using namespace std;
//
//int arr[1001][1001];
//long long prefix[1001][1001] = { 0 };
//
//long long max(long long a, long long b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int i, j, n, R;
//	cin >> n >> R;
//	long long ned = 0;
//	for (i = 0; i < n; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		getchar();
//		cin >> arr[x++][y++];
//	}
//	for (i = 1; i < 1001; i++)
//		for (j = 1; j < 1000; j++)
//		{
//			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
//
//		}
//	for (i = R ; i < 1001; i++)
//		for (j = R ; j < 1001; j++)
//		{
//			ned = max(ned, prefix[i][j] + prefix[i - R][j - R] - prefix[i - R][j] - prefix[i][j - R]);
//		}
//	cout << ned;
//}
