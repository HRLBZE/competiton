//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//long long inp[500][500];
//long long ttt[250000];
//long long ine[250000];
//int main()
//{
//	int num;
//	cin >> num;
//	int i1;
//	for (i1 = 0; i1 < num; i1++)
//	{
//		int i;
//		int n;
//		long long c, d;
//		cin >> n >> c >> d;
//		int derm = 0;
//		for (i = 0; i < n * n; i++)
//			cin >> ttt[i];
//		sort(ttt, ttt + n * n);
//		for (i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				inp[i][j] = ttt[0] + c * j + d * i;
//				ine[i * n + j] = inp[i][j];
//			}
//		}
//		sort(ine, ine + n * n);
//		for (i = 0; i < n * n; i++)
//		{
//			if (ine[i] != ttt[i])
//				derm = 1;
//			if (derm)
//			{
//				cout << "NO" << endl;
//				break;
//			}
//		}
//		if (!derm)
//		{
//			cout << "YES" << endl;
//			continue;
//		}
//
//
//		//for (int j = 0; j < n - 1; j++)
//		//{
//		//	for (int k = 0; k < n - 1; k++)
//		//	{
//		//		if ((inp[k][j] + d) != inp[k + 1][j])
//		//		{
//		//			cout << "NO" << endl;
//		//			derm = 1;
//		//			break;
//		//		}
//		//	}
//		//	if (derm)
//		//		break;
//		//}
//		//if (derm)
//		//	continue;
//		//for (int j = 0; j < n - 1; j++)
//		//{
//		//	for (int k = 0; k < n - 1; k++)
//		//	{
//		//		if ((inp[j][k] + c) != inp[j][k + 1])
//		//		{
//		//			cout << "NO" << endl;
//		//			derm = 1;
//		//			break;
//		//		}
//		//	}
//		//	if (derm)
//		//		break;
//		//}
//		//if (derm)
//		//	continue;
//		//else
//		//	cout << "YES" << endl;
//	}
//
//}