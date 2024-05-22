//#include<iostream>
//
//using namespace std;
//
//long long  sub[10003] = { 0 };
//
//
//int main()
//{
//	long long i, n, h, f;
//	cin >> n >> h >> f;
//	for (i = 0; i < f; i++)
//	{
//		long long a, b;
//		cin >> a >> b;
//		if (a == b)
//			continue;
//		else if (a > b)
//		{
//			long long c = a;
//			a = b;
//			b = c;
//		}
//		for (long long j = a; j < b-1; j++)
//			sub[j]--;
//	}
//	for (i = 0; i < n; i++)
//		cout << h + sub[i] << endl;
//	return 0;
//
//}
//
