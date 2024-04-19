//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	//ÖÊÊı
//	int arr[] = { 10,11,101,111,1111,1011,1001,1101 };
//	int test_num;
//	cin >> test_num;
//	for (int i = 0; i < test_num; i++)
//	{
//		int n;
//		cin >> n;
//		int num = n;
//		int tmp = n;
//		int f = 1;
//		while (tmp)
//		{
//			if (tmp % 10 > 1)
//			{
//				f = 0;
//			}
//			tmp /= 10;
//		}
//		if (f == 1)
//		{
//			cout << "YES" << endl;
//			continue;
//		}
//
//
//		for (int k = 7; k >= 0; k--)
//		{
//			while (num % arr[k] == 0)
//			{
//				num /= arr[k];
//			}
//
//			if (num == 1)
//				break;
//		}
//
//		if (num != 1)
//			cout << "NO" << endl;
//		else
//			cout << "YES" << endl;
//	}
//	return 0;
//}
