//#include<iostream>
//using namespace std;
//
//
//
//char a2[10000], a3[10000];
//int main()
//{
//
//	int n, j;
//	cin >> n;
//	char c = 'A';
//
//	for (int i = 0; i < 10000; i++)
//	{
//		if (i % 2 == 0)
//			a2[i] = 'A';
//		else
//			a2[i] = 'B';
//	}
//	for (int i = 0; i < 10000; i++)
//	{
//		if (i % 2 == 0)
//			a3[i] = 'B';
//		else
//			a3[i] = 'A';
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int num = 0;
//		int min = 0;
//		int min1 = 0;
//		int min2 = 0;
//		j = 0;
//		char a1[10000] = { 0 };
//		cin >> a1;
//		while (a1[j])
//		{
//			if (a1[j] != a2[j])
//				min1++;
//			if (a1[j] != a3[j])
//				min2++;
//			j++;
//		}
//		if (min1 < min2)
//			cout << min1 << endl;
//		else
//			cout << min2 << endl;
//	}
//}