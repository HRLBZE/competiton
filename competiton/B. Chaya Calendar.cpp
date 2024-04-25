//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int year;
//	int n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		long long sign[101];
//		int amount, j;
//		cin >> amount;
//		for (j = 0; j < amount; j++)
//			cin >> sign[j];
//		year = sign[0];
//		for (j = 1; j < amount; j++)
//		{
//			if (year < sign[j])
//				year += sign[j] - year;
//			else
//			{
//				long long tmp = year % sign[j];
//				long long tmp1 = sign[j] - tmp;
//				year += tmp1;
//			}
//		}
//		cout << year << endl;
//	}
//	return 0;
//}