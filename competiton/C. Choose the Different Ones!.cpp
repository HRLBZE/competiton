//#include<iostream>
//#include<algorithm>
//using namespace std;
//long long a[200001];
//long long b[200001];
//
//int main()
//{
//	long long t, i;
//	cin >> t;
//	for (i = 0; i < t; i++)
//	{
//		long long an, bn;
//		long long A, B, same, a_tmp, b_tmp;
//		A = B = same = an = bn = 0;
//		a_tmp = -1;
//		b_tmp = -2;
//		long long n, m, k, j;
//		cin >> n >> m >> k;
//		for (j = 0; j < n; j++)
//			cin >> a[j];
//		for (j = 0; j < m; j++)
//			cin >> b[j];
//		sort(a, a + n);
//		sort(b, b + m);
//		j = 1;
//		while (j <= k)
//		{
//			for (; an < k; an++)
//			{
//				if (a[an] == j)
//				{
//					A++;
//					a_tmp = j;
//					break;
//				}
//				if (a[an] > j)
//				{
//					break;
//				}
//			}
//			for (; bn < k; bn++)
//			{
//				if (b[bn] == j)
//				{
//					B++;
//					b_tmp = j;
//					break;
//				}
//				if (b[bn] > j)
//				{
//					break;
//				}
//			}
//			if (a_tmp == b_tmp)
//			{
//				same++;
//			}
//			j++;
//		}
//		if (A + same < k / 2 || B + same < k / 2)
//		{
//			cout << "NO"<<endl;
//			continue;
//		}
//		if (A - same > k / 2 || B - same > k / 2)
//		{
//			cout << "NO"<<endl;
//			continue;
//		}
//
//		if (A + B - same == k)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//
//
//}
//
//
////#include<iostream>
////#include<algorithm>
////using namespace std;
////
////long long a[200001];
////long long b[200001];
////struct total
////{
////	long long c;
////	int queue;
////};
////
////total totals[400002];
////
////bool cmp(total a, total b)
////{
////	return a.c < b.c;
////}
////
////int main()
////{
////	int num, n, m, k, i, j;
////	cin >> num;
////	for (i = 0; i < num; i++)
////	{
////		int A, B;
////		A = B = 0;
////		int derm = 1;
////		cin >> n >> m >> k;
////		for (j = 0; j < n; j++)
////		{
////			cin >> a[j];
////			totals[j].c = a[j];
////			totals[j].queue = 1;
////		}
////
////		for (j = 0; j < m; j++)
////		{
////			cin >> b[j];
////			totals[j + n].c = b[j];
////			totals[j + n].queue = 2;
////		}
////		int min = m > n ? n : m;
////		int same = 0;
////		sort(a, a + n);
////		sort(b, b + m);
////		sort(totals, totals + n + m, cmp);
////		int kkk = 1;
////		int jjj = 0;
////		int same_tmp = 0;
////		int same__ = 0;
////		while (kkk <= k)
////		{
////			if (totals[jjj].c == kkk && totals[jjj].c != totals[jjj + 1].c && totals[jjj].c != same_tmp)
////			{
////				kkk++;
////				jjj++;
////				if (totals[jjj].queue == 1)
////					A++;
////				else
////					B++;
////				continue;
////			}
////			else if (totals[jjj].c == kkk && totals[jjj].c == totals[jjj + 1].c)
////			{
////				same_tmp = totals[jjj].c;
////				jjj++;
////				if (totals[jjj].queue != totals[jjj + 1].queue)
////					same__ = 1;
////				else
////					same__ = 0;
////				continue;
////			}
////			else if (totals[jjj].c != kkk)
////			{
////				derm = 0;
////				break;
////			}
////			jjj++;
////			kkk++;
////			if(same__)
////				same++;
////		}
////
////
////		if (A + B + same != k)
////			derm = 0;
////		if (derm)
////			cout << "YES" << endl;
////		else
////			cout << "NO" << endl;
////	}
////	return 0;
////}
