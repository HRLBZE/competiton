//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//const int mod = 1e9 + 7;
//int d[2005][2005] = { '0' };
//int main()
//{
//	int n, m, i, j, k;
//	cin >> n >> m;
//	d[0][1] = 1;
//	for (i = 0; i <= m; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			for (k = j; k <= n; k += j)
//			{
//				d[i + 1][k] = (d[i + 1][k] + d[i][j]) % mod;
//			}
//		}
//	}
//	int ans = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ans = (ans + d[m][i]) % mod;
//	}
//	cout << ans;
//	return 0;
//}



//#include<iostream>
//
//int str[2003][2003] = { '0' };
//int main()
//{
//
//	using namespace std;
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		str[0][i] = i + 1;
//	}
//	for (int i = 1; i < k; i++)
//		for (int j = i; j < n; j++)
//			str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
//	cout << str[k - 1][n - 1] % 100000007;
//	return 0;
//}

//Çó[n][k]µÄÖµ

