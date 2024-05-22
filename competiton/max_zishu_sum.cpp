//#include<iostream>
//using namespace std;
//
//int num[100001] = { 0 };
//int main()
//{
//	int i = 0;
//	int length = 0;
//	do
//	{
//		cin >> num[i];
//		i++;
//		length++;
//	} while (cin.get() != '\n');
//	int sum, max;
//	max = sum = num[0];
//	for (i = 1; i < length; i++)
//	{
//		if (sum < 0)
//			sum = num[i];
//		else
//			sum += num[i];
//		if (sum > max)
//			max = sum;
//	}
//	cout << max;
//	return 0;
//}