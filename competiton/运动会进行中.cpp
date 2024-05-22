//#include<iostream>
//
//using namespace std;
//
//int peo[100000];
//int main()
//{
//	int i;
//	long long num;
//	cin >> num;
//	for (i = 0; i < num; i++)
//	{
//		cin >> peo[i];
//	}
//	long long  max = 0;
//	long long man = 0;
//	long long wem = 0;
//	long long k = 0;
//	if (peo[0] == 1)
//		man++;
//	else
//		wem++;
//	for (i = 1; i < num; i++)
//	{
//		if (peo[i] == 0 && peo[i - 1] == 0)
//		{
//			wem++;
//			if (wem <= man)
//			{
//				k = wem * 2;
//				if (k > max)
//					max = k;
//			}
//
//			else
//				man = 0;
//
//		}
//		else if (peo[i] == 1 && peo[i - 1] == 1)
//		{
//			man++;
//			if (man <= wem)
//			{
//				k = man * 2;
//				if (k > max)
//					max = k;
//			}
//			else
//				wem = 0;
//		}
//		else if (peo[i] == 0 && peo[i - 1] != 0)
//		{
//			man++;
//			if (man <= wem)
//			{
//				int k = man * 2;
//				if (k > max)
//					max = k;
//			}
//			else
//			{
//				wem = 0;
//			}
//		}
//		else if (peo[i] == 1 && peo[i - 1] != 1)
//		{
//			wem++;
//			if (wem <= man)
//			{
//				k = wem * 2;
//				if (k > max)
//					max = k;
//			}
//		}
//
//	}
//	cout << max;
//
//}