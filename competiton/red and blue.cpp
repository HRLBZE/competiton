//#include<iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct num
//{
//	long long data;
//	char color;
//};
//
//num nu[200002];
//
//bool compa(num a, num b)
//{
//	if (a.color == b.color)
//		return a.data < b.data;
//	else
//		return a.color < b.color;
//}
//
//
//int main()
//{
//	long long  times, length, i;
//	cin >> times;
//	while (times)
//	{
//		getchar();
//		int derm = 1;
//		cin >> length;
//		for (i = 0; i < length; i++)
//			cin >> nu[i].data;
//		for (i = 0; i < length; i++)
//			cin >> nu[i].color;
//		sort(nu, nu + length, compa);
//		i = 0;
//		while (i < length)
//		{
//			if (nu[i].color == 'B')
//			{
//				if (nu[i].data < i+1)
//				{
//					derm = 0;
//					break;
//				}
//			}
//			else
//			{
//				if (nu[i].data > i+1)
//				{
//					derm = 0;
//					break;
//				}
//			}
//			i++;
//		}
//		if (derm)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//		times--;
//	}
//	return 0;
//}
