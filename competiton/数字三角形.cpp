//#include<iostream>
//using namespace std;
//
//int arr[501][501] = { 0 };
//
//long long max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//long long recursion(int arr[][501], int left, int right, int n)
//{
//
//	if (right > left)
//		return 0;
//	else if (left >= n)
//		return 0;
//	else
//		return max(recursion(arr, left + 1, right, n) + arr[left][right], recursion(arr, left + 1, right + 1, n) + arr[left][right]);
//
//}
//
//int main()
//{
//	int n, i, j;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j <= i; j++)
//		{
//			cin >> arr[i][j];
//		}
//	long long max = recursion(arr, 0, 0, n);
//	cout << max;
//	return 0;
//
//}