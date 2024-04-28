//#include<iostream>
//using namespace std;
//
//long long gold[50] = { 0 };
//long long coin[50] = { 0 };
//
//long long find(int n, int i)
//{
//	if (i == 0)
//		return 0;
//	if (n == 0)
//		return 1;
//	if (n >= 2 && i == 1)
//		return 0;
//	if (i > 1 && i < coin[n - 1] + 1)
//		return find(n - 1, i - 1);
//	if (i >= coin[n - 1] + 1 && i < coin[n - 1] + 1 + n)
//		return gold[n - 1] + i - 1 - coin[n - 1];
//	if (i >= coin[n - 1] + 1 + n && i < coin[n - 1] * 2 + n + 1)
//		return gold[n - 1] + n + find(n - 1, i - 1 - coin[n - 1] - n);
//	if (i >= coin[n - 1] * 2 + n + 1)
//		return gold[n];
//}
//
//
//int main()
//{
//	coin[0] = 1;
//	gold[0] = 1;
//	long long n, i, j;
//	cin >> n >> i;
//	for (j = 1; j <= n; j++)
//		gold[j] = gold[j - 1] * 2 + j;
//	for (j = 1; j <= n; j++)
//		coin[j] = coin[j - 1] * 2 + j + 2;
//	long long sum = find(n, i);
//	cout << sum << endl;
//	return 0;
//}