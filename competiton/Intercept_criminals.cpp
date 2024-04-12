//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//bool check(int mid, int a[], int n, int k)
//{
//	int cnt = 0;
//	for (int i = 1; i < n; i++)
//	{
//		int tmp = a[i] - a[i - 1];
//		int divi = tmp / mid;
//		int remainder = tmp % mid;
//		if (divi)
//		{
//			if (remainder)
//			{
//				cnt += divi;
//			}
//			else
//			{
//				cnt += divi - 1;
//			}
//		}
//	}
//	if (cnt > k)
//		return false;
//	else
//		return true;
//}
//
//int main()
//{
//	int L, n, k;
//	cin >> L >> n >> k;
//	int* a = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	sort(a, a + n);
//	int r = 1, l = L;
//	int mid;
//
//	while (r <= l)
//	{
//		int mid = (r + l) / 2;
//		if (check(mid, a, n, k))
//			l = mid - 1;
//		else
//			r = mid + 1;
//	}
//	cout << r;
//	delete[] a;
//	return 0;
//}