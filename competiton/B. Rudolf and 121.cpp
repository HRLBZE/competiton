//#include<iostream>
//
//using namespace std;
//
//int jian(long long a[], int n, int number)
//{
//	while (1)
//	{
//		if (n == number - 3 && a[n] == 0)
//			break;
//		if (a[n] == 0)
//			n++;
//		else
//		{
//			a[n + 1] -= a[n] * 2;
//			a[n + 2] -= a[n];
//			a[n] -= a[n];
//		}
//		if (a[n + 1] < 0 || a[n + 2] < 0)
//			return -1;
//	}
//	if (a[number - 1] == a[number - 2] && a[number - 1] == a[number - 3] && a[number - 1] == 0)
//		return 1;
//	else
//		return -1;
//}
//
//long long shuzu[200001];
//
//int main()
//{
//	int n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		int number, j;
//		cin >> number;
//		for (j = 0; j < number; j++)
//			cin >> shuzu[j];
//		int derm = jian(shuzu, 0, number);
//		if (derm == -1)
//			cout << "NO" << endl;
//		else
//			cout << "YES" << endl;
//	}
//
//}
//
////#include<iostream>
////
////using namespace std;
////
////
////
////
////int jian(long long a[], int n, int number)
////{
////	while (1)
////	{
////		if (a[n] == 0)
////			n++;
////		//io
////		else
////		{
////			a[n] -= 1;
////			a[n + 1] -= 2;
////			a[n + 2] -= 1;
////		}
////		if (a[n] < 0 || a[n + 1] < 0 || a[n + 2] < 0)
////			return -1;
////		if (a[number - 3] == 0 && (a[number - 2] != 0 || a[number - 1] != 0))
////			return -1;
////		//¿ÉÄÜ´æÔÚ 1 1 1 000 
////		if (a[number - 1] == a[number - 2] && a[number - 1] == a[number - 3] && a[number - 1] == 0)
////			return 1;
////	}
////}
////
////long long shuzu[200001];
////
////int main()
////{
////	int n, i;
////	cin >> n;
////	for (i = 0; i < n; i++)
////	{
////		int number, j;
////		cin >> number;
////		for (j = 0; j < number; j++)
////			cin >> shuzu[j];
////		int derm = jian(shuzu, 0, number);
////		if (derm == -1)
////			cout << "NO" << endl;
////		else
////			cout << "YES" << endl;
////	}
////
////}